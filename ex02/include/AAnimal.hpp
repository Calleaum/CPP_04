/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:11:34 by calleaum          #+#    #+#             */
/*   Updated: 2025/08/20 14:31:24 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


# include <string>
# include <iostream>

class AAnimal
{
	protected:
		std::string	type;
	public:
		AAnimal(void);
		AAnimal(const std::string &type);
		AAnimal(const AAnimal &animal);
		virtual ~AAnimal(void);
		AAnimal	&operator=(const AAnimal &animal);

		std::string	getType(void) const;
		virtual void	makeSound(void) const = 0;
};