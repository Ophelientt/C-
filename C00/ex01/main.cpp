#include "phonebook.hpp"
#include "contact.hpp"
#include <string>
#include <iostream>

int main()
{
	std::string	input;
	PhoneBook pb;

	while (1)
	{
		std::cout<<"Enter command:"<<std::endl;
		if (!std::getline(std::cin, input))
			return(0) ;
		else if (input == "ADD")
		{
			pb.add_contact();
			if (!std::getline(std::cin, input))
				return(0) ;
		}
		else if (input == "SEARCH")
		{
			pb.search_contact();
			if (!std::getline(std::cin, input))
				return(0) ;
		}
		else if (input == "EXIT")
			return (0);
	}
}