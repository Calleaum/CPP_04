/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:34:11 by calleaum          #+#    #+#             */
/*   Updated: 2025/08/20 14:10:52 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("WrongCat")
{
	std::cout << "Default constructor WrongCat called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongCat): WrongAnimal(wrongCat)
{
	std::cout << "Copy constructor WrongCat called" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Destructor WrongCat called" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &wrongCat)
{
	*static_cast<WrongAnimal *>(this) = wrongCat;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meooooow !" << std::endl;
}