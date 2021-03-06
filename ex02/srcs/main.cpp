/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:32:53 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/20 19:06:28 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "class/Cat.hpp"
#include "class/Dog.hpp"

int	main(void)
{
	// AAnimal const	*meta = new AAnimal();
	AAnimal const	*rumba = new Dog();
	AAnimal const	*norminet = new Cat();

	std::cout << *rumba << std::endl;
	std::cout << *norminet << std::endl;

	delete norminet;
	delete rumba;
	// delete meta;
	return EXIT_SUCCESS;
}
