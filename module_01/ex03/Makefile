NAME		= humans

CC			= g++
CFLAGS		= -Wall -Wextra -Werror -std=c++98 -g

SRC			= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $(<:%.cpp=%.o)

OBJ			= $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

.PHONY: all clean fclean re
