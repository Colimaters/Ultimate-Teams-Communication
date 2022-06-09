##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile for library
##

##
## \file Makefile
## \brief Le Makefile pour build la lib en un lib*.a
##

SRC = $(shell find . -name "*.c")

OBJ = $(SRC:.c=.o)

NAME = libmy.a

CC = gcc

OPTI_CC = -O1 -fsigned-char

CFLAGS = -I ../include $(OPTI_CC)

YELLOW = "\033[01;33m"
RED = "\033[01;31m"
WHITE = "\033[00m"

LEFT = $(RED) "\n =====" $(YELLOW)
RIGHT = $(RED) "=====\n" $(WHITE)

all: $(NAME)

%.o: %.c
	@$(CC) -c $(SRC) $(CFLAGS)
	@echo $(LEFT) " LINK LIB " $(RIGHT)

$(NAME): $(OBJ)
	@echo $(LEFT) " BUILD LIB " $(RIGHT)
	@ar rc $(NAME) $(OBJ)

clean:
	@rm -rf $(OBJ)
	@echo $(LEFT) "CLEAN LIB.o" $(RIGHT)

fclean: clean
	@rm -rf $(NAME)
	@echo $(LEFT) "CLEAN LIBMY" $(RIGHT)

re: fclean all

.PHONY: all clean fclean re