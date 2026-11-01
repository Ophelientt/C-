/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onotteau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 18:35:35 by onotteau          #+#    #+#             */
/*   Updated: 2025/10/25 18:45:48 by onotteau         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <string>
#include <iostream>

int main()
{
	std::string	input;
	PhoneBook pb;

	while (1)
	{
		if (std::cin)
			std::cout<<"Enter command:"<<std::endl;
		if (!std::getline(std::cin, input))
			return(0) ;
		else if (input == "ADD")
			pb.add_contact();
		else if (input == "SEARCH")
			pb.search_contact();
		else if (input == "EXIT")
			return (0);
	}
	return (0);
}
