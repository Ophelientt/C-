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

}