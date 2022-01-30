/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 06:24:14 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/30 16:57:53 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "class/Character.hpp"
#include "class/Cure.hpp"
#include "class/Ice.hpp"
#include "class/MateriaSource.hpp"

int	main(void)
{
	ICharacter		*me;
	ICharacter		*bob;
	IMateriaSource	*src;
	AMateria		*tmp;
	AMateria		*floor[42];

	me = new Character("me");
	bob = new Character("bob");
	src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	tmp = src->createMateria("ice");
	if (tmp)
		me->equip(tmp);
	else
		std::cout << "Unknown Materia" << std::endl;

	tmp = src->createMateria("cure");
	if (tmp)
		me->equip(tmp);
	else
		std::cout << "Unknown Materia" << std::endl;

	tmp = src->createMateria("fire");
	if (tmp)
		me->equip(tmp);
	else
		std::cout << "Unknown Materia" << std::endl;

	std::cout << *(Character *)me << std::endl;
	std::cout << *(Character *)bob << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);

	*(Character *)bob = *(Character *)me;

	std::cout << *(Character *)bob << std::endl;

	floor[0] = ((Character *)me)->getSlot(0);
	me->unequip(0);
	floor[1] = ((Character *)me)->getSlot(1);
	me->unequip(1);
	floor[2] = ((Character *)me)->getSlot(2);
	me->unequip(2);
	floor[3] = ((Character *)me)->getSlot(3);
	me->unequip(3);

	delete floor[0];
	delete floor[1];
	delete floor[2];
	delete floor[3];
	delete src;
	delete bob;
	delete me;

	return EXIT_SUCCESS;
}
