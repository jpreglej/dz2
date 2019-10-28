SRC=$(wildcard src/*c)
OBJ=$(patsubst %c, %o, $(SRC))
INC=inc/

CFLAGS=-I $(INC)
EXE=exe/app.elf






.SECONDARY:

all: $(EXE)

%.elf: $(OBJ)
	gcc $(OBJ) -o $@

%.o: %.c
	gcc -c $< -I inc/ -o  $@ -lm

clean:
	rm -f $(OBJ) $(EXE)
