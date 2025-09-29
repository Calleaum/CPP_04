/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:13:48 by calleaum          #+#    #+#             */
/*   Updated: 2025/07/15 14:43:46 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Brain.hpp"
#include "AAnimal.hpp"

class Dog: public AAnimal
{
	private:
		Brain	*brain;

	public:
		Dog();
		Dog(const Dog &dog);
		~Dog();

		Dog		&operator=(const Dog &cat);
		
		void	makeSound() const;
};