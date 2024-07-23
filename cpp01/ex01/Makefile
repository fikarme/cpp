NAME = zzombi

all: $(NAME)

clean:
	@rm -rf $(NAME)

re: clean all

$(NAME):
	@c++ -std=c++98 -Wall -Wextra -Werror -fsanitize=address $(wildcard *.cpp) -o $(NAME)

.PHONY: all clean re