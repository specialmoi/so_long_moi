NAME:=  so_long

SRC:=  error.c

OBJ:= (SRC:%.c=%.o)

LIBFT_DIR:= libft
LIBFT_NAME:= libft.a

LFLAGS:= -L./$(LIBFT_DIR) -lft
IFLAGS:= -I./$(LIBFT_DIR)

INC_LIB:= -I./$(LIBFT_DIR)
INC_SO_LONG:= -I./so_long.h

RESET:= \033[0m
GREEN:= \033[32m

CC:=  cc
$(CFLAGS):= -Wall -Wextra -Werror -g

RM:= rm -f

all: $(NAME)

LIBFT_NAME:
	make -C $(LIBFT_DIR) $(LIBFT_NAME)
	@echo "$(GREEN)# libft.a created through make $(RESET)"

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(INC_SO_LONG)
	@echo "$(GREEN)# object linked and compiled $(RESET)"

$(OBJ): $(SRC)
	$(CC) -c $(SRC)
	@echo "$(GREEN)# object from source created $(RESET)"

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:
	make $(all)

PHONY:= all clean fclean re