/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:11:34 by calleaum          #+#    #+#             */
/*   Updated: 2025/07/15 13:25:44 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const std::string &type);
		Animal(const Animal &animal);
		virtual ~Animal();
		Animal &operator=(const Animal &animal);

		std::string		getType() const;
		virtual void	makeSound() const; 
};