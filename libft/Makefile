# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isadbaib <isadbaib@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 02:47:46 by iadbaibi          #+#    #+#              #
#    Updated: 2024/12/02 11:46:04 by isadbaib         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = src/check/ft_isalpha.c src/check/ft_isalnum.c src/check/ft_isdigit.c \
	  src/check/ft_isascii.c src/conversion/ft_tolower.c \
	  src/conversion/ft_atoi.c src/conversion/ft_itoa.c \
	  src/conversion/ft_toupper.c src/display/ft_putendl_fd.c \
	  src/display/ft_putstr_fd.c src/display/ft_putnbr_fd.c \
	  src/display/ft_putchar_fd.c src/memory/ft_memcmp.c \
	  src/display/printf/src/ft_print_u.c \
	  src/display/printf/src/ft_print_desimal.c \
	  src/display/printf/src/ft_digit_len.c \
	  src/display/printf/src/ft_free_memory.c \
	  src/display/printf/src/ft_print_string.c \
	  src/display/printf/src/ft_print_char.c \
	  src/display/printf/src/ft_print_x_upcase.c \
	  src/display/printf/src/ft_print_adress.c \
	  src/display/printf/src/ft_check_type.c \
	  src/display/printf/src/ft_print_x.c \
	  src/display/printf/src/ft_printf.c \
	  src/memory/ft_memmove.c src/memory/ft_memchr.c \
	  src/memory/ft_calloc.c src/memory/ft_bzero.c \
	  src/memory/ft_memset.c src/memory/ft_memcpy.c \
	  src/memory/ft_bzero_gnl.c \
	  src/memory/ft_clean_buffer.c \
	  src/file/get_next_line.c \
	  src/string/ft_strchr.c src/string/ft_strnstr.c \
	  src/string/ft_strlcat.c src/string/ft_strjoin.c \
	  src/string/ft_strlen.c src/string/ft_striteri.c \
	  src/string/ft_strncmp.c src/string/ft_strcmp.c \
 	  src/string/ft_strdup.c src/string/ft_strrchr.c \
	  src/string/ft_strlcpy.c src/string/ft_substr.c \
	  src/string/ft_strmapi.c src/string/ft_strtrim.c \
	  src/string/ft_split.c src/string/ft_strlen_gnl.c \
	  src/string/ft_strjoin_gnl.c 
SRCBONUS = src/list/ft_lstadd_front_bonus.c src/list/ft_lstnew_bonus.c \
	       src/list/ft_lstsize_bonus.c src/list/ft_lstadd_back_bonus.c \
	   	   src/list/ft_lstclear_bonus.c src/list/ft_lstlast_bonus.c \
	       src/list/ft_lstdelone_bonus.c src/list/ft_lstiter_bonus.c \
	   	   src/list/ft_lstmap_bonus.c
#${wildcard *.c} c'ést la version qui permet de cherche automatique et de liste les fichier 

CC = gcc
FLAGS = -Wall -Wextra -Werror -g3
NAME = libft.a
LIBTODO = ar rcs
RM = rm -f
OBJ = ${SRC:.c=.o}
OBJB = ${SRCBONUS:.c=.o}

${NAME}: ${OBJ}
		${LIBTODO} $@ ${OBJ}

%.o: %.c
		${CC} -o $@ -c $< ${FLAGS}

all: ${NAME} 

bonus:	${OBJ} ${OBJB}
		${LIBTODO} ${NAME} ${OBJ} ${OBJB}
clean:
		${RM} ${OBJ} ${OBJB}

fclean: clean
		${RM} ${NAME} ${BONUS}

re: fclean all

.PHONY: all clean fclean re bonus
