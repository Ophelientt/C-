/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onotteau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 18:35:35 by onotteau          #+#    #+#             */
/*   Updated: 2025/10/25 18:45:48 by onotteau         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */
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