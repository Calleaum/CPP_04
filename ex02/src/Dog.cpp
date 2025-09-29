/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:28:24 by calleaum          #+#    #+#             */
/*   Updated: 2025/07/15 14:43:52 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog(void): AAnimal("Dog")
{
	brain = new Brain();
	std::cout << "Default constructor Dog called" << std::endl;
}

Dog::Dog(const Dog &dog): AAnimal(dog), brain(NULL)
{
	*this = dog;
	std::cout << "Copy constructor Dog called" << std::endl;
}

Dog::~Dog(void)
{
	if (brain != NULL)
		delete brain;
	std::cout << "Destructor Dog called" << std::endl;
}

Dog	&Dog::operator=(const Dog &dog)
{
	if (this == &dog)
		return (*this);
	AAnimal::operator=(dog);
	if (brain != NULL)
		delete brain;
	brain = new Brain(*dog.brain);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Bark !" << std::endl;
}