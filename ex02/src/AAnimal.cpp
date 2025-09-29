/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:39:15 by calleaum          #+#    #+#             */
/*   Updated: 2025/07/15 14:40:14 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void): type("animal")
{
	std::cout << "Default constructor AAnimal called" << std::endl;
}

AAnimal::AAnimal(const std::string &type): type(type)
{
	std::cout << "Type constructor Animal called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &animal): type(animal.type)
{
	std::cout << "Copy constructor Animal called" << std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout << "Destructor Animal called" << std::endl;
}

AAnimal	&AAnimal::operator=(const AAnimal &animal)
{
	if (this == &animal)
		return (*this);
	this->type = animal.type;
	return (*this);
}

std::string	AAnimal::getType(void) const
{
	return (this->type);
}