CC = gcc
CFLAGS = -Wall

SRCS = $(wildcard *.c)
TARGETS = $(SRCS:.c=)

all: $(TARGETS)

%: %.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(TARGETS)


