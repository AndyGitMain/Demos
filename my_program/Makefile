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
SUBTARGET = ./src/myprj

all : $(TARGET)

$(TARGET) : $(SUBTARGET)
	cp $(SUBTARGET) ./

$(SUBTARGET) :
	for i in $(SUBDIRS); do\
		cd $$i; make all; cd ..;\
	done

clean :
	for i in $(SUBDIRS); do\
		cd $$i; make clean; cd ..;\
	done
	rm $(TARGET)

