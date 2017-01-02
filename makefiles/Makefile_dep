#
# Compile Option
#

.SUFFIXES : .c .o

CC = gcc
CFLAGS = -g -c
INC = -I./include

TARGET = test
OBJECTS = main.o read.o write.o
SRCS = $(OBJECTS:.o=.c)


all : $(OBJECTS)
	$(CC) -o $(TARGET) $(OBJECTS)

dep :
	$(CC) -M $(INC) $(SRCS) > .depend

clean :
	rm -rf $(OBJECTS) $(TARGET)
	@echo "Delete files"

distclean : clean
	rm -rf .depend

ifeq (.depend,$(wildcard .depend))
include .depend
endif
