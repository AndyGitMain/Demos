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
SRCS = $(OBJECTS:.o=.c)
TARGET = myprj


all : $(OBJECT1) #$(OBJECT2)
#	$(CC) -o $(TARGET) $(OBJECT1) $(INC)$(OBJECT2)

main.o : main.c
	$(CC) $(CFLAGS) $<
helper.o : helper.c
	$(CC) $(CFLAGS) $<
#myadd.o :
#	$(MAKE) -C $(INC)


clean :
	rm -rf $(OBJECT1) $(OBJECT2)

