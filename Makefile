LIBFT_SRC = ./libft/
LIBFT = $(LIBFT_SRC)libft.a
SRC = ./src/math/ft_normaliser.c \
	./src/math/ft_decreasing.c \
	./src/algo/ft_algon3.c \
	./src/algo/algo2.c \
	./src/error/ft_error.c \
	./src/check/ft_check.c \
	./src/move/ft_invert_rotation.c \
	./src/move/ft_rotation.c \
	./src/move/ft_swap.c \
	./src/move/ft_push.c \
	./src/push_swap.c \
	./src/search/ft_search.c \
	./src/string/ft_fusion.c \
	./src/display/ft_show_stack.c \
	./src/display/show_instruction.c \
	./src/convertion/ft_split_str_int.c \
	./src/convertion/ft_push_swap_itoa.c \
	./src/element/ft_element.c \
	./src/memory/ft_free.c \
	./src/stack/ft_stack.c \
	./src/stack/ft_update_index.c \
	./src/param/ft_check_param.c \
	./src/instruction/ft_add_instruction.c \
	./src/algo/algo.c \
	./src/math/ft_medium.c
	

CC = cc 
FLAGS = -Wall -Wextra -Werror -g3
NAME = push_swap 
RM = rm
OBJ = ${SRC:.c=.o}

all : $(NAME) $(LIBFT)

$(NAME) : ${OBJ} $(LIBFT)
	@$(CC) $(OBJ) -o $(NAME) $(FLAGS) -I$(LIBFT_SRC)include -L$(LIBFT_SRC) -lft

${LIBFT} : 
	$(MAKE) -C $(LIBFT_SRC)

%.o : %.c
	$(CC) -c $< $(FLAGS) -o $@ 

clean : 
	$(RM) -f $(OBJ) 
	$(MAKE) -C $(LIBFT_SRC) clean

fclean : clean 
	$(RM) -f $(NAME)
	$(MAKE) -C $(LIBFT_SRC) fclean


re : fclean all

.PHONY: all clean fclean re
