/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:32:53 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/29 03:26:57 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "class/Cat.hpp"
#include "class/Dog.hpp"
#include "class/WrongCat.hpp"

int	main(void)
{
	Animal const		*meta = new Animal();
	Animal const		*rumba = new Dog();
	Animal const		*norminet = new Cat();
	WrongAnimal const	*deceiver = new WrongCat();

	std::cout << *meta << std::endl;
	std::cout << *rumba << std::endl;
	std::cout << *norminet << std::endl;
	std::cout << *deceiver << std::endl;

	meta->makeSound();
	rumba->makeSound();
	norminet->makeSound();
	deceiver->makeSound();

	delete deceiver;
	delete norminet;
	delete rumba;
	delete meta;

	return EXIT_SUCCESS;
}
