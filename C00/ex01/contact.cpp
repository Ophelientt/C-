#include "phonebook.hpp"
#include "contact.hpp"

Contact::Contact()
{
	first_name = "";
	last_name = "";
	nickname = "";
	phone_number = "";
	darkest_secret = "";
}
void Contact::set_contact(std::string& first, std::string& last, std::string& nick, std::string& phone, std::string& dark)
{
	first_name = first;
	last_name = last;
	nickname = nick;
	phone_number = phone;
	darkest_secret = dark;
}

std::string Contact::get_first_name()const
{
	return (first_name);
}

std::string Contact::get_last_name()const
{
	return (last_name);
}

std::string Contact::get_nickname()const
{
	return (nickname);
}

std::string Contact::get_phone_number()const
{
	return (phone_number);
}

std::string Contact::get_darkest_secret()const
{
	return (darkest_secret);
}