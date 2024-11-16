CPPFLAG = -Wall -Wextra -Werror -std=c++98

OBJ = Contact.o PhoneBook.o main.o 

INCLUDE = Contact.hpp PhoneBook.hpp

NAME = PhoneBook

all : $(NAME)


$(NAME) : $(OBJ)
		c++ $(CPPFLAG) $(OBJ) -o $(NAME)

%.o : %.cpp  $(INCLUDE)
	c++ -c $(CPPFLAG) $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

