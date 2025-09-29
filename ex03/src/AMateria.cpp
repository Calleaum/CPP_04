/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 09:36:33 by calleaum          #+#    #+#             */
/*   Updated: 2025/07/16 11:57:46 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type): _type(type)
{
}

AMateria::AMateria(const AMateria &copy)
{
	*this = copy;
}

AMateria::~AMateria(void)
{
}

AMateria	&AMateria::operator=(AMateria const &aMateria)
{
	this->_type = aMateria._type;
	return (*this);
}

const std::string	&AMateria::getType(void) const
{
	return (this->_type);
}

void	AMateria::use(ICharacter &target) const
{
	std::cout << "* Using " << _type << " materia on " << target.getName()
		<< " *" << std::endl;
}