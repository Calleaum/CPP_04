/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 16:25:54 by calleaum          #+#    #+#             */
/*   Updated: 2025/07/16 11:57:38 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ICharacter.hpp"
# include <iostream>

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria();
		AMateria(const std::string &type);
		AMateria(const AMateria &copy);
		virtual	~AMateria();

		AMateria			&operator=(AMateria const &aMateria);

		virtual void		use(ICharacter &target) const;
		const	std::string	&getType(void) const;
		virtual AMateria	*clone(void) const = 0;
};
