#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook 
{
	private:
		Contact contacts[8];
		int nb_contact;
		int index;
	public:
		PhoneBook();
		void	add_contact();
		void	search_contact();
};

#endif