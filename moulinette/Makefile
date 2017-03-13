##
## Makefile for asm_minilibc in /home/auzou_t/rendu/asm_minilibc/moulinette
## 
## Made by Thibaud Auzou
## Login   <auzou_t@epitech.net>
## 
## Started on  Tue Mar 10 13:46:18 2015 Thibaud Auzou
## Last update Wed Mar 11 13:39:44 2015 Thibaud Auzou
##

CC		= gcc

RM		= rm -f

CFLAGS		+= -W -Wall -fno-builtin -fno-builtin-function

NAME_STUD	= moul_auzou_vieira

SRC_STUD	= moul.c

OBJS_STUD	= $(SRC_STUD:.c=.o)


all: extern $(NAME_STUD)

extern:
	make -C ../

$(NAME_STUD): $(OBJS_STUD)
	$(CC) -o $(NAME_STUD) $(OBJS_STUD) $(CFLAGS)

clean:
	make clean -C ../
	$(RM) $(OBJS_STUD)

fclean: clean
	make fclean -C ../
	$(RM) $(NAME_STUD)

re: fclean all

.PHONY: all clean fclean re
