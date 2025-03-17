CC = cc
CFLAGS = -Wall -O2 -std=c2x
LDFLAGS = 

all: clean tree

tree: tree.o
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

tree.o: tree.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm -rf *.o tree

.PHONY: all clean
