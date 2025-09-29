/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 09:36:29 by calleaum          #+#    #+#             */
/*   Updated: 2025/08/21 13:28:46 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	public:
		static const size_t	slot_count = 4;
	private:
		AMateria	*_materias[MateriaSource::slot_count];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &copy);
		~MateriaSource();

		MateriaSource		&operator=(const MateriaSource &copy);

		virtual void		learnMateria(AMateria *materia);
		virtual AMateria	*createMateria(const std::string &type);
};
