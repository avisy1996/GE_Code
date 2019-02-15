IDIR=./include
ODIR=./obj
LDIR=./lib
EDIR=./exec
SDIR=./src

CC=gcc
CFLAGS=-Wall -I $(IDIR)

#LIBS=

_DEPS = Calc_sum.h
DEPS=$(patsubst %, $(IDIR)/%,$(_DEPS))

_OBJ = Calc_sum.o get_sum.o
OBJ=$(patsubst %, $(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: $(SDIR)/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(EDIR)/Calc_sum: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(IDIR)/*~ $(EDIR)/*
