CC = gcc
CFLAGS = -Wall -Wextra -std=c11
SRCDIR = .
SRC = $(wildcard $(SRCDIR)/*.c)
OBJ = $(SRC:.c=.o)
TARGET = main

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)