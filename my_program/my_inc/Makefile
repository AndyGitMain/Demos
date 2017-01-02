#
# my_program/my_inc/
#
# Compile Option
#
CC = gcc
CFLAGS = -g -c


OBJECTS = myadd.o
SRCS = $(OBJECTS:.o=.c)

all : myadd

myadd : $(SRCS)
	$(CC) $(CFLAGS) $(SRCS)

clean :
	rm -rf $(OBJECTS)

