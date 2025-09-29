/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:13:28 by calleaum          #+#    #+#             */
/*   Updated: 2025/08/20 14:03:38 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat: public Animal
{
	private:
		std::string	type;

	public:
		Cat();
		Cat(const Cat &cat);
		~Cat();

		Cat		&operator=(const Cat &cat);
		
		void	makeSound() const;
};