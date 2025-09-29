/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:26:57 by calleaum          #+#    #+#             */
/*   Updated: 2025/07/15 14:27:41 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
}

Brain::Brain(const Brain &brain)
{
	*this = brain;
}

Brain::~Brain(void)
{
}

Brain	&Brain::operator=(const Brain &brain)
{
	if (this == &brain)
		return (*this);
	for (size_t i = 0; i < IDEA_COUNT; i++)
		ideas[i] = brain.ideas[i];
	return (*this);
}