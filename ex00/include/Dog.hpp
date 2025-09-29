/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:13:48 by calleaum          #+#    #+#             */
/*   Updated: 2025/07/15 13:28:01 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog: public Animal
{
	private:
		std::string	type;

	public:
		Dog();
		Dog(const Dog &dog);
		~Dog();

		Dog		&operator=(const Dog &cat);
		
		void	makeSound() const;
};