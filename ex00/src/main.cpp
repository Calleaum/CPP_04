/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:14:37 by calleaum          #+#    #+#             */
/*   Updated: 2025/08/21 09:44:42 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	Animal const	*meta = new Animal();
	Animal const	*dog = new Dog();
	Animal const	*cat = new Cat();

	std::cout << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << std::endl;
	meta->makeSound();
	dog->makeSound();
	cat->makeSound();
	std::cout << std::endl;

	delete meta;
	delete dog;
	delete cat;

	std::cout << std::endl << std::endl << std::endl;

	WrongAnimal const	*meta2 = new WrongAnimal();
	WrongAnimal const	*dog2 = new WrongDog();
	WrongAnimal const	*cat2 = new WrongCat();

	std::cout << std::endl;
	std::cout << meta2->getType() << " " << std::endl;
	std::cout << dog2->getType() << " " << std::endl;
	std::cout << cat2->getType() << " " << std::endl;
	std::cout << std::endl;
	meta2->makeSound();
	dog2->makeSound();
	cat2->makeSound();
	std::cout << std::endl;

	delete meta2;
	delete dog2;
	delete cat2;
	return (0);
}