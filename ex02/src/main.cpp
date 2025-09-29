/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:14:37 by calleaum          #+#    #+#             */
/*   Updated: 2025/08/21 10:35:36 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

# define ANI_COUNT 10

int	main(void)
{
	const AAnimal	*a;
	const AAnimal	*b;
	const AAnimal	*c;
	const AAnimal	*d;
	const AAnimal	*e;
	const AAnimal	*f;
	AAnimal	*animals[ANI_COUNT];

	a = new Cat();
	b = new Dog();
	delete a;
	delete b;
	std::cout << std::endl;

	d = new Cat();
	c = d;
	delete d;
	std::cout << std::endl;

	f = new Dog();
	e = f;
	delete f;
	std::cout << std::endl;

	for (size_t i = 0; i < ANI_COUNT; ++i)
	{
		if (i % 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	std::cout << std::endl;
	
	for (size_t i = 0; i < ANI_COUNT; ++i)
		delete animals[i];
	return (0);
}