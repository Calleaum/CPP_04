/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:13:28 by calleaum          #+#    #+#             */
/*   Updated: 2025/08/20 14:03:48 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"


class Cat: public AAnimal
{
	private:
		Brain	*brain;

	public:
		Cat();
		Cat(const Cat &cat);
		~Cat();

		Cat		&operator=(const Cat &cat);
		
		void	makeSound() const;
};