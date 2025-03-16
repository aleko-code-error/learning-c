CFLAGS = -g -Wall -O2

default: all

all: traffic-light

traffic-light: traffic-light.o
	$(CC) $< -o $@
