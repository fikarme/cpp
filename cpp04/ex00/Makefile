NAME    = lain
CPP     = c++
FLAGS   = -std=c++98 -Wall -Wextra -Werror
SRCS    = $(wildcard *.cpp)

all: $(NAME)

$(NAME): $(SRCS)
	@$(CPP) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re