CPPFLAG = -Wall -Wextra -Werror -std=c++98

OBJ = Account.o tests.o 

INCLUDES = Account.hpp

NAME = Account

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(CPPFLAG) $(OBJ) -o $(NAME)

%.o : %.cpp $(INCLUDES)
	c++ -c $(CPPFLAG) $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all