NAME = push_swap


CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f


SRC = mandatory/list_utils.c    mandatory/main.c    mandatory/string_utils.c mandatory/utils.c  mandatory/moves/push_moves.c       mandatory/moves/rev_rotate_moves.c mandatory/moves/rotate_moves.c     mandatory/moves/swap_moves.c


OBJ = $(SRC:.c=.o)

mandatory/%.o: mandatory/%.c mandatory/push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@


all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME) 

re : fclean all

.PHONY: clean