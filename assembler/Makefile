SRCS = ft_strlen.s ft_strcpy.s ft_strcmp.s

OBJS = $(SRCS:.s=.o)

LIB_FLAG = nasm -g -f elf64

NAME = libasm.a

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o: %.s
	@$(LIB_FLAG) $< -o $@

$(NAME): $(OBJS)
	@ar -rc $(NAME) $(OBJS)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)
	@rm -rf test

test: $(NAME) $(OBJS)
	@clang  -o test main.c $(NAME) -lc 

re: fclean all

.PHONY: all clean fclean re test