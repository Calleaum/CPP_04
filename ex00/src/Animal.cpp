/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:28:34 by calleaum          #+#    #+#             */
/*   Updated: 2025/08/21 09:43:59 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): type("animal")
{
	std::cout << "Default constructor Animal called" << std::endl;
}

Animal::Animal(const std::string &type): type(type)
{
	std::cout << "Type constructor Animal called" << std::endl;
}

Animal::Animal(const Animal &animal): type(animal.type)
{
	std::cout << "Copy constructor Animal called" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Destructor Animal called" << std::endl;
}

Animal	&Animal::operator=(const Animal &animal)
{
	this->type = animal.type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "..." << std::endl;
}