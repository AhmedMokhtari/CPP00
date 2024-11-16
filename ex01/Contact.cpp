#include "Contact.hpp"



// first name 
std::string Contact::get_first_name() const
{
	return this->first_name;
};

bool Contact::set_first_name(const std::string &first_name)
{
	if (!is_valid(first_name))
		return false;
	this->first_name = first_name;
	return true;
};

// last name
std::string Contact::get_last_name() const
{
	return this->last_name;
};

bool Contact::set_last_name(std::string &last_name)
{
	if (!is_valid(last_name))
		return false;
	this->last_name = last_name;
	return true;
};

// nickname

std::string Contact::get_nickname() const
{
	return this->nickname;
};

bool Contact::set_nickname(std::string &nickname)
{
	if (!is_valid(nickname))
		return false;
	this->nickname = nickname;
	return true;
};

// phone number

std::string Contact::get_phone_number() const
{
	return this->phone_number;
};

bool Contact::set_phone_number(std::string &phone_number)
{
	if (!is_valid(phone_number))
		return false;
	this->phone_number = phone_number;
	return true;
};

// darkest secret
 
std::string Contact::get_darkest_secret() const
{
	return this->darkest_secret;
};

bool Contact::set_darkest_secret(std::string &darkest_secret)
{
	if (!is_valid(darkest_secret))
		return false;
	this->darkest_secret = darkest_secret;
	return true;
};


std::string Contact::ft_trim(const std::string &str)
{
	std::string t;
	size_t len = str.length();

	size_t begin = 0;
	size_t end = len;

	while (str[begin] && str[begin] == ' ')
		begin++;
	// if(begin == len)
	// 	return t;
	while (end > 0 && str[len] == ' ')
		len--;
	return str.substr(begin, end);
}

bool Contact::is_valid(const std::string &str)
{
	size_t i = 0;

	std::string t = ft_trim(str);
	size_t len = t.length();
	if (!len)
		return false;
	while (i < len)
	{
		if (t[i] < 040 || t[i] > 0176)
			return false;
		i++;
	}
	return true;
}

// show info

void Contact::show_info() const
{
	std::cout << "Your First Name is : " << this->get_first_name() << std::endl;
	std::cout << "Your Last Name is : " << this->get_last_name() << std::endl;
	std::cout << "Your Nickname is : " << this->get_nickname() << std::endl;
	std::cout << "Your Phone Number is : " << this->get_phone_number() << std::endl;
	std::cout << "Your Darkest Secret  is : " << this->get_darkest_secret() << std::endl;
}