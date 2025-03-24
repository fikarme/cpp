NAME	= weapon
CPP		= @c++
FLAGS	= -std=c++98 -Wall -Wextra -Werror
SRCS	= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

all: $(NAME)

$(NAME):
	$(CPP) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -rf $(NAME)

fclean: clean

re: fclean all