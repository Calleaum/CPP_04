/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 09:36:41 by calleaum          #+#    #+#             */
/*   Updated: 2025/08/21 10:41:04 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
}

Ice::Ice(const Ice &copy): AMateria(copy._type)
{
}

Ice::~Ice()
{
}

Ice	&Ice::operator=(const Ice &copy)
{
	*static_cast<AMateria *>(this) = copy;
	return (*this);
}

Ice	*Ice::clone(void) const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target) const
{
	std::cout << "* shoots an ice bolt at "
		<< target.getName() << " *" << std::endl;
}