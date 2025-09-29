NAME = Moarbrainz!

C++ = g++-15
CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

SRC = ./main.cpp \
		zombieHorde.cpp \
		Zombie.cpp \

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(C++) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(C++) $(CFLAGS) -c $< -o $@

make: make all

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY : all clean fclean re
