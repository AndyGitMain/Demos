#
# my_program/my_inc/
#
# Compile Option
#
CC = gcc
CFLAGS = -g -c

#
# Directory
#

OBJECTS = myadd.o
SRCS = $(OBJECTS:.o=.c)

all : myadd

myadd : $(SRCS)
	$(CC) $(CFLAGS) $(SRCS)


