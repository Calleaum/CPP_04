/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:28:14 by calleaum          #+#    #+#             */
/*   Updated: 2025/07/15 14:31:02 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
	brain = new Brain();
	std::cout << "Default constructor Cat called" << std::endl;
}

Cat::Cat(const Cat &cat): Animal(cat), brain(NULL)
{
	*this = cat;
	std::cout << "Copy constructor Cat called" << std::endl;
}

Cat::~Cat(void)
{
	if (brain != NULL)
		delete brain;
	std::cout << "Destructor Cat called" << std::endl;
}

Cat	&Cat::operator=(const Cat &cat)
{
	if (this == &cat)
		return (*this);
	Animal::operator=(cat);
	if (brain != NULL)
		delete brain;
	brain = new Brain(*cat.brain);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meooow !" << std::endl;
}