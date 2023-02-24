# My First Useful Make file :)

#gcc    -c -o main.o main.c
#gcc    -c -o school.o school.c
#gcc main.o school.o -o school

CC=gcc
SRC=%.c
OBJ=main.o school.o
NAME=school

%.o: $(SRC)
	$(CC) -c -o $@ $<

.PHONE: all
all: $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

.PHONY: clean
clean:
	rm -f *.o school
