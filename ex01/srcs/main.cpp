/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:32:53 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/25 10:02:33 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "class/Cat.hpp"
#include "class/Dog.hpp"

static void	__test0(void)
{
	Animal const	*rumba = new Dog();
	Animal const	*norminet = new Cat();

	std::cout << *rumba << std::endl;
	std::cout << *norminet << std::endl;

	delete norminet;
	delete rumba;
}

static void	__test1(void)
{
	Animal const	*herd[10];
	uint			i;

	for (i = 0 ; i < 5 ; ++i)
		herd[i] = new Cat();
	for ( ; i < 10 ; ++i)
		herd[i] = new Dog();
	for (i = 0 ; i < 10 ; ++i)
		std::cout << *herd[i] << std::endl;
	for (i = 0 ; i < 10 ; ++i)
		delete herd[i];
}

static void	__test2(void)
{
	Cat const	nyan;
	Cat const	saphir(nyan);
	Cat			filou;

	std::cout << nyan << std::endl;
	std::cout << saphir << std::endl;

	filou = saphir;

	std::cout << filou << std::endl;
}

int	main(void)
{
	__test0();
	std::cout << "-----------------------------------------------" << std::endl;
	__test1();
	std::cout << "-----------------------------------------------" << std::endl;
	__test2();
	return EXIT_SUCCESS;
}
