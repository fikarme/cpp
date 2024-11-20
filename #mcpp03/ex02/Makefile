NAME	= fragTrap
CPP		= @c++
FLAGS	= -std=c++98 -Wall -Wextra -Werror
SRCS	= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

all: $(NAME)

$(NAME):
	$(CPP) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -rf $(NAME)

fclean: clean

re: fclean all