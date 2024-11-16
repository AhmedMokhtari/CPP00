#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iomanip>


void	add_new_contact(PhoneBook &phone)
{
	std::string tmp;
	Contact obj;


	while (1)
	{
		std::cout << "Enter Your First name : ";
		getline(std::cin, tmp);
		if (obj.set_first_name(tmp))
			break;
		std::cerr << "Invalide input \n";
	}

	while (1)
	{
		std::cout << "Enter Your Last name : ";
		getline(std::cin, tmp);
		if (obj.set_last_name(tmp))
			break;
		std::cerr << "Invalide input \n";
	}
	
	while (1)
	{
		std::cout << "Enter Your Nick name : ";
		getline(std::cin, tmp);
		if (obj.set_nickname(tmp))
			break;
		std::cerr << "Invalide input \n";
	}

	while (1)
	{
		std::cout << "Enter Your Phone number : ";
		getline(std::cin, tmp);
		if (obj.set_phone_number(tmp))
			break;
		std::cerr << "Invalide input \n";
	}
	
	while(1)
	{
		std::cout << "Enter Your darkest secret : ";
		getline(std::cin, tmp);
		if (obj.set_darkest_secret(tmp))
			break;
		std::cerr << "Invalide input \n";
	}

	phone.add_new_contact(obj);
}

std::string align(std::string str)
{
	if (str.size() > 10)
		return str.substr(0, 9) + ".";
	return str;
}
void search_contact(const PhoneBook &phone)
{
	int i = 0;
	std::string tmp;

	while (i < phone.nb_contacts)
	{
		std::cout << std::setw(10) << align(std::to_string(i + 1)) << "|" ;
		std::cout << std::setw(10) << align(phone.contacts[i].get_first_name())  << "|";
		std::cout << std::setw(10) << align(phone.contacts[i].get_last_name())<< "|";
		std::cout << std::setw(10) << align(phone.contacts[i].get_nickname());
		std::cout <<  std::endl;
		i++;
	}
	std::cout << "Choise User ID : ";
	getline(std::cin, tmp);
	if (tmp.size() > 1 || tmp[0] - '0' <= 0 || tmp[0] - '0' > phone.nb_contacts)
		std::cout << "Invalid index \n";
	else
		phone.contacts[tmp[0] - '0' - 1].show_info();

}

int main()
{
	std::string tmp;
	PhoneBook phone;

	while (1)
	{
		std::cout << "----------------- Enter You Choise --------------------\n";
		std::cout << "ADD New Contact\n";
		std::cout << "Search\n";
		std::cout << "Exit\n";
		std::cout << "-------------------------------------------------------\n";
		if (!getline(std::cin, tmp))
			break ;
		if (!tmp.compare("ADD"))
			add_new_contact(phone);
		else if (!tmp.compare("Search"))
			search_contact(phone);
		else if (!tmp.compare("Exit"))
			return (0);
		else
			std::cout << "Enter Valide Choise \n";
		
	}
	return (0);
}