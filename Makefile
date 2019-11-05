

all: exe/test08.elf

%.elf: src/test08.o src/cmplx.o
	gcc src/test08.o src/cmplx.o -o $@ -lm

%.o: %.c
	gcc -c $< -I inc/ -o  $@ -lm

clean:
	rm -f src/*.o exe/app.elf
