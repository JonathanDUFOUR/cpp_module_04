/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 06:25:48 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/29 06:51:32 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Cure.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

Cure::Cure(void) :
	AMateria("cure")
{
	std::cout
	<< "Creating Cure"
	<< std::endl;
}

Cure::Cure(Cure const &src) :
	AMateria("cure")
{
	std::cout
	<< "Creating Cure"
	<< std::endl;
	*this = src;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

Cure::~Cure(void)
{
	std::cout
	<< "Destroying Cure"
	<< std::endl;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

AMateria	*Cure::clone(void) const
{
	return new Cure();
}

void	Cure::use(ICharacter &target)
{
	std::cout
	<< "* heals "
	<< target.getName()
	<< "'s wounds *"
	<< std::endl;
}
