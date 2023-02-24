# My Complete Make file :)

CC=gcc
SRC=main.c school.c
OBJ=$(SRC:.c=.o)
NAME=school
RM=rm -f
FLAGS=-Wall -Werror -Wextra -pedantic

.PHONY: all
all: $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c -o $@ $<

.PHONY: clean oclean fclean re

clean:
	$(RM) *~ $(NAME)

oclean:
	$(RM) $(OBJ)

fclean:
	$(RM) *~ $(NAME)
	$(RM) $(OBJ)

re:
	$(RM) $(OBJ)
	$(MAKE)
