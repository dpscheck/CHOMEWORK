OBJS = main.o ComplexNumber.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS= -Wall $(DEBUG)

Chapter6 : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o Chapter6

main.o : main.cpp ComplexNumber.hpp
	$(CC) $(CFLAGS) main.cpp

ComplexNumber.o: ComplexNumber.cpp ComplexNumber.hpp
	$(CC) $(CFLAGS) ComplexNumber.cpp