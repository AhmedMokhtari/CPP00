CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = megaphone.cpp

OBJ = megaphone.o

NAME = MEGAPHOHNE

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(CFLAGS) $(OBJ) -o $(NAME)

%.o  : %.cpp
	c++ -c $(CPPFLAGS) $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re : fclean all