#
# Version
#
VERSION = 1
PATCHLEVEL = 0
SUBLEVEL = 0
EXTRAVERSION =

PRJRELEASE=$(VERSION).$(PATCHLEVEL).$(SUBLEVEL)$(EXTRAVERSION)

#
# Compile Option
#
.SUFFIXES : .c .o
CC = gcc
CFLAGS = -g -c
INC = ./my_inc/
SRCDIR = ./src/
TARGET = myprj
OBJECT1 = myadd.o
OBJECT2 = main.o helper.o

all : myinc source
	$(CC) -o $(TARGET) $(INC)$(OBJECT1) $(SRCDIR)main.o $(SRCDIR)helper.o 


myinc :
	$(MAKE) -C $(INC)
source :
	$(MAKE) -C $(SRCDIR)

clean :
	rm -rf $(INC)$(OBJECT1) $(SRCDIR)main.o $(SRCDIR)helper.o

