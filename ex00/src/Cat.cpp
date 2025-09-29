/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:28:14 by calleaum          #+#    #+#             */
/*   Updated: 2025/08/21 09:44:24 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
	std::cout << "Default constructor Cat called" << std::endl;
}

Cat::Cat(const Cat &cat): Animal(cat)
{
	std::cout << "Copy constructor Cat called" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Destructor Cat called" << std::endl;
}

Cat	&Cat::operator=(const Cat &cat)
{
	*static_cast<Animal *>(this) = cat;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meoooooooow !" << std::endl;
}