# pragma once

# include <iostream>
# include <string.h>

class Contact
{
	private :
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		bool is_valid(const std::string &str);
		bool is_all_num(const std::string &str);
		std::string ft_trim(const std::string &str);

	public :
		// first  name

		std::string get_first_name() const;
		bool set_first_name(const std::string &first_name);

		// last name

		std::string get_last_name() const;
		bool set_last_name(std::string &last_name);

		// Nickname

		std::string get_nickname() const;
		bool set_nickname(std::string &nickname);

		// Phone Number
		std::string get_phone_number() const;
		bool set_phone_number(std::string &phone_number);


		// Darkest secret

		std::string get_darkest_secret() const;
		bool set_darkest_secret(std::string &darkest_secret);

		// Show Contact

		void	show_info() const;
};