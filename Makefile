-include .config

MAJOR_VER = 1
MINOR_VER = 0

TOP_DIR := $(shell pwd)
IMG_DIR := $(CONFIG_IMAGE_PATH)

CROSS_COMPILE = $(CONFIG_CROSS_COMPILE:"%"=%)

AS = $(CROSS_COMPILE)as
CC = $(CROSS_COMPILE)gcc
LD = $(CROSS_COMPILE)ld
OBJDUMP = $(CROSS_COMPILE)objdump
OBJCOPY = $(CROSS_COMPILE)objcopy

CFLAGS = -ffreestanding -nostdinc -nostdlib -fno-builtin -I$(TOP_DIR)/include -include g-bios.h -D__GBIOS_VER__=\"$(MAJOR_VER).$(MINOR_VER)\" -D__LITTLE_ENDIAN -O2 -Wall -Werror -mno-thumb-interwork -march=$(CONFIG_ARCH_VER) -mabi=aapcs-linux

#ifeq ($(CONFIG_DEBUG),y)
#	CFLAGS += -DCONFIG_DEBUG
#endif

# fxime: to add "-mtune=xxx, -mfloat-abi=xxx"

ASFLAGS = $(CFLAGS) -D__ASSEMBLY__

# LDFLAGS = -m armelf_eabi

builtin-obj = built-in.o

MAKEFLAGS = --no-print-directory

export AS CC LD OBJDUMP OBJCOPY ASFLAGS CFLAGS LDFLAGS MAKEFLAGS
export builtin-obj TOP_DIR

# fixme
DEFCONFIG_PATH = build/configs/arm
DEFCONFIG_LIST = $(shell cd $(DEFCONFIG_PATH) && ls *_defconfig)

include build/rules/common.mk

dir-y := arch/$(CONFIG_ARCH) core driver lib

subdir-objs := $(foreach n, $(dir-y), $(n)/$(builtin-obj))

all: include/autoconf.h $(dir-y) g-bios.bin g-bios.dis
#all: include/autoconf.h $(dir-y) g-bios.bin
	@echo

include/autoconf.h: .config
	@build/generate/autoconf.py $< $@
	@sed -i -e '/CONFIG_CROSS_COMPILE/d' -e '/CONFIG_ARCH_VER\>/d'  $@
	@sed -i '/^$$/d' $@

g-bios.bin: g-bios.elf
	$(OBJCOPY) -O binary -S $< $@

g-bios.dis: g-bios.elf
	$(OBJDUMP) -D $< > $@

g-bios.elf: $(subdir-objs)
	$(LD) $(LDFLAGS) -T arch/$(CONFIG_ARCH)/g-bios.lds -Ttext $(CONFIG_START_MEM) $^ -o $@

$(dir-y):
	@make $(obj_build)$@

.PHONY: $(dir-y)

help:
	@echo 'usage: make <device>_defconfig'
	@echo 'the available <device>_defconfig list:'
	@for cfg in $(DEFCONFIG_LIST); do echo "   $$cfg"; done
	@echo

# FIXME
$(DEFCONFIG_LIST):
	@echo "configure for board \"$(@:%_defconfig=%)\""
#	@./build/generate/defconfig.py $@
	@cp -v build/configs/arm/$@ .config
	@echo

install: g-bios.bin
	@mkdir -p $(IMG_DIR)
	@for fn in $^; do \
		cp -v $$fn $(IMG_DIR); \
	done
	@echo

clean:
	@for dir in $(dir-y); do \
		make $(obj_build)$$dir clean; \
	 done
	@rm -vf g-bios.*
	@echo

distclean: clean
	@rm -vf .config include/autoconf.h
	@echo

clear:
	@./build/clearup.sh

.PHONY: $(dir-y)
