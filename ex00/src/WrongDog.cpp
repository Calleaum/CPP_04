/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:34:13 by calleaum          #+#    #+#             */
/*   Updated: 2025/08/20 14:10:54 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog(void): WrongAnimal("WrongDog")
{
	std::cout << "Default constructor WrongDog called" << std::endl;
}

WrongDog::WrongDog(const WrongDog &wrongDog): WrongAnimal(wrongDog)
{
	std::cout << "Copy constructor WrongDog called" << std::endl;
}

WrongDog::~WrongDog(void)
{
	std::cout << "Destructor WrongDog called" << std::endl;
}

WrongDog	&WrongDog::operator=(const WrongDog &wrongDog)
{
	*static_cast<WrongAnimal *>(this) = wrongDog;
	return (*this);
}

void	WrongDog::makeSound(void) const
{
	std::cout << "Wooooof!" << std::endl;
}