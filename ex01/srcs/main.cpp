/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:32:53 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/29 05:10:02 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "class/Cat.hpp"
#include "class/Dog.hpp"

int	main(void)
{
	Animal const	*rumba = new Dog();
	Animal const	*norminet = new Cat();
	Animal const	*herd[42];
	int		i;

	for (i = 0 ; i < 42 ; ++i)
		if (i < 21)
			herd[i] = new Cat();
		else
			herd[i] = new Dog();
	for (i = 0 ; i < 42 ; ++i)
		delete herd[i];
	delete norminet;
	delete rumba;
	return EXIT_SUCCESS;
}
