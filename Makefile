NAME = push_swap


CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f


SRC = mandatory/utils/list_utils.c  mandatory/utils/list_utils1.c  mandatory/main.c    mandatory/utils/string_utils.c mandatory/utils/utils.c  mandatory/moves/push_moves.c       mandatory/moves/rev_rotate_moves.c mandatory/moves/rotate_moves.c     mandatory/moves/swap_moves.c \
		mandatory/parsing/join.c  mandatory/parsing/parse.c mandatory/parsing/split.c  mandatory/sort/sort.c mandatory/sort/small_sort.c 



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