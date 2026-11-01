/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onotteau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 18:35:35 by onotteau          #+#    #+#             */
/*   Updated: 2025/10/25 18:45:48 by onotteau         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */
#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact 
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string	phone_number;
		std::string darkest_secret;
	public:
		Contact();
		void set_contact(std::string& first, std::string& last, std::string& nick, std::string& phone, std::string& dark);
		std::string get_first_name()const;
		std::string get_last_name()const;
		std::string get_nickname()const;
		std::string get_phone_number()const;
		std::string get_darkest_secret()const;
};
	
#endif