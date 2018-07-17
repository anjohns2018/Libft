# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aljohnso <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/01 13:29:27 by aljohnso          #+#    #+#              #
#    Updated: 2018/07/16 20:54:59 by aljohnso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAG = -Wall -Werror -Wextra

DEL = /bin/rm -f

CC = gcc

SRC = ft_atoi.c ft_bzero.c ft_count_words.c ft_isalnum.c ft_isalpha.c \
	  ft_isascii.c ft_isdigit.c ft_islower.c ft_isprint.c ft_isspace.c \
	  ft_isupper.c ft_itoa.c ft_lst_add_back.c ft_lstadd.c ft_lstdel.c \
	  ft_lstdelcont.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c \
	  ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	  ft_memdel.c ft_memmove.c ft_memset.c ft_print_memory.c ft_printjoin.c \
	  ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c \
	  ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c ft_realloc.c ft_strcat.c \
	  ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c ft_strdup.c \
	  ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
	  ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strnequ.c \
	  ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strrev.c \
	  ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c \

OBJ = $(SRC:.c=.o)

$(NAME): 
	$(CC) $(FLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	$(DEL) $(OBJ)

fclean: clean
	$(DEL) $(NAME)

re: fclean all

.PHONY: clean fclean all
