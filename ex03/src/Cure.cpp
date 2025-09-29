/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 09:36:38 by calleaum          #+#    #+#             */
/*   Updated: 2025/08/21 10:41:08 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
}

Cure::Cure(const Cure &o): AMateria(o._type)
{
}

Cure::~Cure()
{
}

Cure	&Cure::operator=(const Cure &copy)
{
	*static_cast<AMateria *>(this) = copy;
	return (*this);
}

Cure	*Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target) const
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}