#
# my_program/my_inc/
#
# Compile Option
#
CC = gcc
CFLAGS += -g
CFLAGS += -c
CFLAGS += -fPIC

AR = ar
OBJECTS = myadd.o
SRCS = $(OBJECTS:.o=.c)
TARGET = myadd.so.1

all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CC) -shared -Wl,-soname,$@ -o $@ $(OBJECTS)

$(OBJECTS) : $(SRCS)
	$(CC) $(CFLAGS) $(SRCS)


clean :
	rm -rf $(OBJECTS)

