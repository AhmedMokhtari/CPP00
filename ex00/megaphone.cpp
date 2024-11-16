#include <stdio.h>
#include <iostream>

void str_to_upper(std::string &str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = std::toupper(str[i]);
		i++;
	}
}


int main(int argc, char **argv)
{
	int i;
	std::string tmp;

	i = 1;
	while (i < argc)
	{
		tmp = argv[i];
		str_to_upper(tmp);
		std::cout << tmp;
		i++;
	}
	std::cout << std::endl;
	return (0);
}