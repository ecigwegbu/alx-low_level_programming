# My First Useful Make file :)

#gcc    -c -o main.o main.c
#gcc    -c -o school.o school.c
#gcc main.o school.o -o school

CC=gcc
SRC=main.c school.c
OBJ=$(SRC:.c=.o)
NAME=school

.PHONY: all
all: $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

%.o: %.c
	$(CC) -c -o $@ $<

.PHONY: clean
clean:
	rm -f *.o school
