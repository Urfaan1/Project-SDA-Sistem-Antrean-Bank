CC = gcc
CFLAGS = -Wall -g
TARGET = program
SRCS = main.c fungsi.c

all: $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

clean:
	del *.o $(TARGET)
