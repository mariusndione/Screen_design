GRFT=GRLIB_REMOVE_WIDE_FONT_SUPPORT
LD_VER_DEF=LAD_MODS_VER_1
MDL_NUM_DEF=VPD_133=0x133A
include default.mk
include makedefs.mk

IPATH+=${ROOT}/include/Drivers/VPD-133

CFLAGS+=-DtBoolean=bool
CFLAGS+=-include stdbool.h
CFLAGS+=-include stdint.h
CFLAGS+=-D${MDL_NUM_DEF}
CFLAGS+=-D${LD_VER_DEF}
CFLAGS+=-D${GRFT}

all: clean
all: ${TARGET}.axf

clean:
	@-rm -f *.o
	@-rm -f *.d

${TARGET}.axf: main.o
include frames.mk


SCATTERgcc_${TARGET}=default.ld
LDFLAGSgcc_${TARGET}=-Map ${TARGET}.map

${TARGET}.axf: default.ld


update:
		dfuprog -a 0x00 -r -f ${TARGET}.bix
