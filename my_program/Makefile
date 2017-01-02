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
CFLAGS += -g
CFLAGS += -c

SUBDIRS = my_inc src
TARGET = myprj

all :
	for i in $(SUBDIRS); do\
		cd $$i; make all; cd ..;\
	done
	cp ./src/$(TARGET) ./

clean :
	for i in $(SUBDIRS); do\
		cd $$i; make clean; cd ..;\
	done
	rm $(TARGET)

