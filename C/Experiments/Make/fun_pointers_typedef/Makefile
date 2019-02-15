IDIR=./include
ODIR=./obj
LDIR=./lib
EDIR=./exec
SDIR=./src

CC=gcc
CFLAGS=-Wall -I $(IDIR)

#LIBS=

_DEPS = fun_pointers_typedef.h
DEPS=$(patsubst %, $(IDIR)/%,$(_DEPS))

_OBJ = fun_pointers_typedef.o
OBJ=$(patsubst %, $(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: $(SDIR)/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(EDIR)/fun_pointers_typedef: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)
#mv calc ./exec

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(IDIR)/*~ $(EDIR)/*
