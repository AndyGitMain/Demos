#
# my_program/src/
#
# Compile Option
#
CC = gcc
CFLAGS = -g -c
INC = ../my_inc/
OBJECT1 = main.o helper.o
OBJECT2 = myadd.o
SRC1 = $(OBJECT1:.o=.c)
SRC2 = $(OBJECT2:.o=.c)
TARGET = myprj

all : src
	$(CC) -o $(TARGET) $(OBJECT1) $(INC)$(OBJECT2)

src : $(SRC1)
	$(CC) $(CFLAGS) $^

clean :
	rm -rf $(OBJECT1) $(TARGET)

