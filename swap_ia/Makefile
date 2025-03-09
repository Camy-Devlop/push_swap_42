
SRC = push_swap.c
CC = cc 
FLAGS = -Wall -Wextra -Werror
NAME = push_swap 
RM = rm
OBJ = ${SRC:.cpp=.o}

all : $(NAME)

${NAME} : ${OBJ}
	$(CC) ${OBJ} ${FLAGS} -o $@

%.o : %.cpp
	$(CC) -c $< $(FLAGS) -o $@ 

clean : 
	$(RM) -f $(OBJ) 		

fclean : clean 
	$(RM) -f $(NAME)


re : fclean all

.PHONY: all clean fclean re
