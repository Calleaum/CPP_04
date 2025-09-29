/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:26:18 by calleaum          #+#    #+#             */
/*   Updated: 2025/07/15 14:26:44 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

# include <iostream>
# define IDEA_COUNT 100

class Brain
{
	private:
		std::string	ideas[IDEA_COUNT];
	public:
		Brain(void);
		Brain(const Brain &brain);
		~Brain(void);
		Brain	&operator=(const Brain &brain);
};