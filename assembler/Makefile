SRCS = ft_strlen.s ft_strcpy.s

OBJS = $(SRCS:.s=.o)

LIB_FLAG = nasm -g -f elf64

NAME = libasm.a

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o: %.s
	@$(LIB_FLAG) $< -o $@

$(NAME): $(OBJS)
	@ar -rc $(NAME) $(OBJS)
	@echo "$(NAME) was created !"

clean:
	@rm -rf $(OBJS)
	@rm -rf test.o

fclean: clean
	@rm -rf $(NAME)
	@echo "$(NAME) was deleted !"
	@rm -rf test 
	@echo "test was deleted !"

test: $(NAME) $(OBJS)
	@clang  -o test main.c $(NAME) -lc 

re: fclean all

.PHONY: all clean fclean re test