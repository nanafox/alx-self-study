#!/bin/bash

CFLAGS = -Wall -g
CC = gcc
LIBS = -lm

main: src/_itob.o src/_ftoa.o src/_reverse.c src/_putchar.o src/_putstr.o src/_printf.o
	$(CC) src/_itob.o src/_ftoa.o src/_reverse.c src/_putchar.o src/_printf.o -o main

main.o:
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
