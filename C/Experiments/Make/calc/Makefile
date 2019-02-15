IDIR=./include
ODIR=./obj
LDIR=./lib
EDIR=./exec
SDIR=./src

CC=gcc
CFLAGS=-Wall -I $(IDIR)

#LIBS=

_DEPS = calc.h
DEPS=$(patsubst %, $(IDIR)/%,$(_DEPS))

_OBJ = add.o sub.o mul.o division.o main.o
OBJ=$(patsubst %, $(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: $(SDIR)/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(EDIR)/calc: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)
#mv calc ./exec

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(IDIR)/*~ $(EDIR)/*
