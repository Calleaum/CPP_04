/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 09:36:27 by calleaum          #+#    #+#             */
/*   Updated: 2025/07/16 11:43:00 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual 			~IMateriaSource() {}
		virtual void 		learnMateria(AMateria *) = 0;
		virtual AMateria* 	createMateria(std::string const & type) = 0;
};