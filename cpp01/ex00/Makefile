NAME    = zzombi
SRCS    = $(wildcard *.cpp)
FLAGS   = -std=c++98 -Wall -Wextra -Werror -fsanitize=address

all: $(NAME)

clean:
	@rm -rf $(NAME)

fclean: clean
	@rm -rf $(NAME)

$(NAME):
	@c++ $(FLAGS) $(SRCS) -o $(NAME)

re: fclean all

.PHONY: all clean fclean re