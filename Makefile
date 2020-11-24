NAME = test_gnl

SRC = main.c get_next_line_utils.c get_next_line.c 

OBJ = $(SRC:.c=.o)

CC = gcc

FLAGS = -Wall -Wextra -Werror -D BUFFER_SIZE=32

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

$(NAME):	$(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
