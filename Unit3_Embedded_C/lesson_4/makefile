#prebared by moaz omar
CC=arm-none-eabi-
CFLAGS=-mcpu=cortex-m4 -g -gdwarf-2 -mthumb
INCS= -I .
LIBS=
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
AS=$(wildcard *.s)
ASOBJ=$(AS:.s=.o)
project_name=tivaC_toggling_led

all:$(project_name).bin
	@echo "		############ Build Is Done... ;-) ############"
#%.o:%.s
#	$(CC)as.exe  $(CFLAGS) $< -o $@
%.o:%.c
	$(CC)gcc.exe -c $(INCS) $(CFLAGS) $< -o $@	
$(project_name).elf: $(OBJ) $(ASOBJ)
	$(CC)ld.exe -T linker_script.ld $(OBJ) $(ASOBJ) -o $@ -Map=Map_file.map
	cp $(project_name).elf $(project_name).axf
$(project_name).bin:$(project_name).elf
	$(CC)objcopy.exe -O binary $< $@
clean_all:
	rm -rf *.o *.elf *.bin

clean:
	rm -rf *.elf *.bin

