##
## Makefile for asm_minilibc in /home/auzou_t/rendu/asm_minilibc
## 
## Made by Thibaud Auzou
## Login   <auzou_t@epitech.net>
## 
## Started on  Tue Mar 10 13:45:04 2015 Thibaud Auzou
## Last update Wed Mar 11 13:36:11 2015 Thibaud Auzou
##

ASM		= nasm

CC		= gcc

RM		= rm -f

ASMFLAGS	+= -f elf64

NAME		= libasm.so

SRCS		= strlen/strlen.S \
		  memset/memset.S \
		  memcpy/memcpy.S \
		  memmove/memmove.S \
		  strcmp/strcmp.S \
		  strncmp/strncmp.S \
		  strcasecmp/strcasecmp.S \
		  strncasecmp/strncasecmp.S \
		  strcspn/strcspn.S \
		  strpbrk/strpbrk.S \
		  strstr/strstr.S \
		  rindex/rindex.S \
		  strchr/strchr.S \

OBJS		= $(SRCS:.S=.o)


all: $(NAME)

$(NAME): $(OBJS)
		$(CC) -fPIC -shared -o $(NAME) $(OBJS)

%.o: %.S
		$(ASM) $(ASMFLAGS) $< -o $@
clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
