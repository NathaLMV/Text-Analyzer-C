CC = gcc
CFLAGS = -Wall -Wextra -std=c11
SRC = src/Main.c
OUT = bin/text-analyzer-c

all: $(OUT)

$(OUT): $(SRC)
	mkdir -p bin
	$(CC) $(CFLAGS) -o $(OUT) $(SRC)

clean:
	rm -rf bin/*
