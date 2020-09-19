default:
	avr-gcc -mmcu=atxmega128a1u main.c -O1 -o main.elf
	avr-objcopy -j .text -O ihex main.elf main.hex
	avrdude -c xplainedpro_pdi -p x128a1u -P usb -U flash:w:main.hex
