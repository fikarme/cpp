NAME    = megaphone
CPP     = @c++
FLAGS   = -std=c++98 -Wall -Wextra -Werror
SRCS    = $(wildcard *.cpp)
OBJS    = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CPP) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re