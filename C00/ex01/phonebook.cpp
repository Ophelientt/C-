#include "phonebook.hpp"
#include "contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>

PhoneBook::PhoneBook()
{
	nb_contact = 0;
	index = 0;
}
static	std::string	cutcolumn(const std::string &text)
{
	if (text.length() > 10)
		return (text.substr(0, 9) + ".");
	return (text);
}
void	PhoneBook::add_contact()
{
	std::string	first_tmp;
	std::string	last_tmp;
	std::string	nick_tmp;
	std::string	phone_tmp;
	std::string	dark_tmp;

	while (first_tmp == "")
	{
		std::cout<<"Enter first name"<<std::endl;
		std::getline(std::cin, first_tmp);
	}
	while (last_tmp == "")
	{
		std::cout<<"Enter last name"<<std::endl;
		std::getline(std::cin, last_tmp);
	}
	while (nick_tmp == "")
	{
		std::cout<<"Enter nickname"<<std::endl;
		std::getline(std::cin, nick_tmp);
	}
	while (phone_tmp == "")
	{	std::cout<<"Enter phone number"<<std::endl;
		std::getline(std::cin, phone_tmp);
	}
	while (dark_tmp == "")
	{
		std::cout<<"Enter darkest secret"<<std::endl;
		std::getline(std::cin, dark_tmp);
	}
	contacts[index].set_contact(first_tmp, last_tmp, nick_tmp, phone_tmp, dark_tmp);
	if (nb_contact != 8)
		nb_contact++;
	index++;
	if (index == 8)
		index = 0;
}

void	PhoneBook::search_contact()
{
	std::string	first;
	std::string	last;
	std::string	nickname;
	int	index;
	
	index = 0;
	if (nb_contact == 0)
	{
		std::cout << "No contact" << std::endl;
		return ;
	}
	std::cout << std::right << std::setw(10) << "index" << "|"
							<< std::setw(10) << "first name" << "|"
							<< std::setw(10) << "last name" << "|"
							<< std::setw(10) << "nickname" << "|"
				<< std::endl;

	while (index < nb_contact)
	{
		first = contacts[index].get_first_name();
		last = contacts[index].get_last_name();
		nickname = contacts[index].get_nickname();
		std::cout << std::right << std::setw(10) << index << "|"
								<< std::setw(10) << cutcolumn(first) << "|"
								<< std::setw(10) << cutcolumn(last) << "|"
								<< std::setw(10) << cutcolumn(nickname) << "|"
				<< std::endl;
		index++;
	}
	while (true)
	{
		std::string	valid_index;
		std::cout << "Enter a valid index" << std::endl;
		if (!std::getline(std::cin, valid_index))
		{	
			std::cout << "Index is not valid" << std::endl;	
			return ;
		}
		if (valid_index.length() == 1 && std::isdigit(valid_index[0]))
			index = valid_index[0] - '0';
		if (index > nb_contact)
		{
			std::cout << "Index is not valid" << std::endl;
			return ;
		}
		std::cout << contacts[index].get_first_name() << std::endl;
		std::cout << contacts[index].get_last_name() << std::endl;
		std::cout << contacts[index].get_nickname() << std::endl;
		std::cout << contacts[index].get_phone_number() << std::endl;
		std::cout << contacts[index].get_darkest_secret() << std::endl;
	}
}