#!/bin/bash

CFLAGS = -Wall -g
CC = gcc
LIBS = -lm

main: main.o src/_itob.o src/_ftoa.o src/_reverse.o src/_putchar.o src/_putstr.o src/_printf.o
	$(CC) main.o src/_itob.o src/_ftoa.o src/_reverse.o src/_putchar.o src/_putstr.o src/_printf.o -o main

main.o: main.c
	$(CC) -c main.c

_itob.o: src/_itob.c include/type_conversion.h
	$(CC) -c src/_itob.c include/type_conversion.h

_ftoa.o: src/_ftoa.c include/type_conversion.h
	$(CC) -c src/_ftoa.c include/type_conversion.h

_reverse.o: src/_reverse.c include/io_handlers.h
	$(CC) -c src/_reverse.c include/io_handlers.h

_putchar.o: src/_putchar.c include/io_handlers.h
	$(CC) -c src/_putchar.c include/io_handlers.h

_putstr.o: src/_putstr.c include/io_handlers.h
	$(CC) -c src/_putstr.c include/io_handlers.h

_printf.o: src/_printf.c include/io_handlers.h
	$(CC) -c src/_printf.c include/io_handlers.h

clean:
	rm src/*.o *.o > /dev/null
