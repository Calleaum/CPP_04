/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:34:00 by calleaum          #+#    #+#             */
/*   Updated: 2025/07/15 13:39:42 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "WrongAnimal.hpp"

class WrongDog: public WrongAnimal
{
	public:
		WrongDog(void);
		WrongDog(const WrongDog &cat);
		~WrongDog(void);
		WrongDog	&operator=(const WrongDog &cat);
		void	makeSound(void) const;
};
