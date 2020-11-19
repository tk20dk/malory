SDCC=/usr/local/bin/sdcc
SDLD=/usr/local/bin/sdld
SDAR=/usr/local/bin/sdar
STM8FLASH=../stm8flash/stm8flash


CFLAGS=\
  -DSTM8L05X_LD_VL \
  -DUSE_STDPERIPH_DRIVER \
  -Ispl/stm8l15x/inc \
  --debug \
  --Werror \
  --std-c11 \
  --opt-code-size

OBJECTS=\
  obj/main.rel \
  obj/i2c.rel \
  obj/spi.rel \
  obj/adc.rel \
  obj/nvdata.rel \
  obj/si4432.rel \
  obj/si7021.rel \
  obj/bh1750.rel \
  obj/stm8l15x_it.rel \
  obj/application.rel

.PHONY: all opt clean flash

all: $(OBJECTS)
	@echo "Linking..."
	@$(SDCC) -mstm8 -Lspl/stm8l15x -lspl $(OBJECTS)

#opt:
#	@printf "\x00\xff\x00\x02\xff\xff\xff\x00\x00" > opt.bin
#	@$(STM8FLASH) -c stlinkv2 -p stm8l101f3 -s opt -b 10 -w opt.bin
#	@rm opt.bin

flash: main.ihx
	@sudo $(STM8FLASH) -c stlinkv2 -p stm8l051f3 -s flash -w main.ihx

obj/%.rel: %.c
	@echo "Compiling $(notdir $<)"
	@mkdir -p obj
	@$(SDCC) -mstm8 $(CFLAGS) -o $@ -c $<

clean:
	@rm -fr obj
	@rm -f opt.bin
	@rm -f main.lk
	@rm -f main.ihx
	@rm -f main.map
	@rm -f main.cdb

