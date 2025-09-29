/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:34:08 by calleaum          #+#    #+#             */
/*   Updated: 2025/08/20 14:07:10 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): type("wronganimal")
{
	std::cout << "Default constructor WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type): type(type)
{
	std::cout << "Type constructor WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal): type(wrongAnimal.type)
{
	std::cout << "Copy constructor WrongAnimal called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Destructor WrongAnimal called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &wrongAnimal)
{
	this->type = wrongAnimal.type;
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Gneugneugneu" << std::endl;
}
