/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 09:36:19 by calleaum          #+#    #+#             */
/*   Updated: 2025/07/16 11:57:06 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <string>
# include "AMateria.hpp"

class Character: public ICharacter
{
	public:
		static const size_t	inventory_slot_count = 4;
	private:
		std::string	_name;
		AMateria	*_materias[Character::inventory_slot_count];
	public:
		Character();
		Character(const std::string &name);
		Character(const Character &copy);
		~Character();

		Character					&operator=(const Character &copy);

		virtual const std::string	&getName() const;
		virtual void				equip(AMateria *materia);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter &target);
};