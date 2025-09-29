/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:28:24 by calleaum          #+#    #+#             */
/*   Updated: 2025/08/21 09:44:10 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
	std::cout << "Default constructor Dog called" << std::endl;
}

Dog::Dog(const Dog &dog): Animal(dog)
{
	std::cout << "Copy constructor Dog called" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Destructor Dog called" << std::endl;
}

Dog	&Dog::operator=(const Dog &dog)
{
	*static_cast<Animal *>(this) = dog;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Wooooooooof !" << std::endl;
}