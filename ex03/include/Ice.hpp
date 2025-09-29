/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 09:36:25 by calleaum          #+#    #+#             */
/*   Updated: 2025/08/21 13:28:34 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

# include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(const Ice &copy);
		~Ice();

		Ice		&operator=(const Ice &copy);

		virtual Ice			*clone() const;
		virtual void		use(ICharacter &target) const;
};