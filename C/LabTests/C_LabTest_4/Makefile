CC=gcc
CFLAGS=-Wall

#LIBS=

_DEPS = bitwise.h
DEPS=$(patsubst %, %,$(_DEPS))

_OBJ = main.c pos_validation.c integer_valid.c my_atoi.c bitcopy.c display_binary.c setbits.c invert.c getbits.c
OBJ=$(patsubst %, %,$(_OBJ))

%.o: %.c $(_DEPS)
	$(CC) -c -fpic -o $@ $< $(CFLAGS)

bitwise: $(_OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f *.o *~ core *~ 
