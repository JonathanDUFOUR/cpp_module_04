/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:32:53 by jodufour          #+#    #+#             */
/*   Updated: 2022/03/02 21:16:50 by jodufour         ###   ########.fr       */
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
	uint			idx(0U);

	for ( ; idx < 5U ; ++idx)
		herd[idx] = new Cat();
	for ( ; idx < 10U ; ++idx)
		herd[idx] = new Dog();
	for (idx = 0 ; idx < 10U ; ++idx)
		std::cout << *herd[idx] << std::endl;
	for (idx = 0 ; idx < 10U ; ++idx)
		delete herd[idx];
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
