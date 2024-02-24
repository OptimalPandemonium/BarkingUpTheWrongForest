CC=gcc
CFLAGS=-g -Wall -Shadow
SRC=src
OBJ=obj
SRCS=$(wildcard $(SRC)/*.c)
OBJS=$(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(SRCS)) 
TESTDIR=test
TEST=test/main
BinDIRECTORY=bin
LIBDIR=lib
LIB=$(LIBDIR)/WrongForrest.a


all: $(TEST)

release: CFLAGS=-Wall -O2 -DNDEBUG
release: clean
release: $(LIB)

$(TEST): $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o $@

$(OBJ)/%.o: $(SRC)/%.c $(SRC)/%.h
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ)/%.o: $(SRC)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIB): $(LIBDIR) $(OBJ) $(OBJS)
	rm $(LIB) 
	ar -cvrs $(LIB) $(OBJS)

clean:
	rm -r $(BinDIRECTORY)/* $(OBJ)/*
