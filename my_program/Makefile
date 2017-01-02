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
CC = gcc
CFLAGS = -g -c

#
# Directory
#
INC = -I./my_inc
SRCDIR = -I./src
TARGET = myprj

all : myinc source
#	$(CC) -o $(TARGET) $(myinc) $(source)

myinc :
	cd my_inc ; $(MAKE)
source :
	cd src ; $(MAKE)

clean :
	rm -rf $(OBJECTS) $(TARGET)

