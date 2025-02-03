NAME = push_swap
BONUS = checker

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f


SRC = mandatory/utils/list_utils.c  mandatory/utils/list_utils1.c  mandatory/main.c    mandatory/utils/string_utils.c mandatory/utils/utils.c  mandatory/moves/push_moves.c       mandatory/moves/rev_rotate_moves.c mandatory/moves/rotate_moves.c     mandatory/moves/swap_moves.c \
		mandatory/parsing/join.c  mandatory/parsing/parse.c mandatory/parsing/split.c  mandatory/sort/sort_utils.c mandatory/sort/small_sort.c mandatory/sort/sort.c
SRCB= bonus/checker_bonus.c bonus/gnl/get_next_line_bonus.c       bonus/gnl/get_next_line_utils_bonus.c bonus/parsing/join_bonus.c  bonus/parsing/parse_bonus.c bonus/parsing/split_bonus.c bonus/utils/list_utils1_bonus.c  \
		bonus/utils/list_utils_bonus.c   bonus/utils/string_utils_bonus.c bonus/utils/utils_bonus.c bonus/moves/moves_bonus.c bonus/moves/sort_bonus.c 


OBJ = $(SRC:.c=.o)
OBJB = $(SRCB:.c=.o)

mandatory/%.o: mandatory/%.c mandatory/push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@
bonus/%.o: bonus/%.c bonus/checker_bonus.h
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

bonus : $(BONUS)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

$(BONUS): $(OBJB)
	$(CC) $(OBJB) -o $(BONUS)

clean :
	$(RM) $(OBJ) $(OBJB)

fclean : clean
	$(RM) $(NAME) $(BONUS)

re : fclean all

.PHONY: clean