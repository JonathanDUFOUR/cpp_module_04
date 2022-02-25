/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 06:25:48 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/25 10:06:23 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Cure.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

Cure::Cure(void) :
	AMateria(std::string("cure"))
{
	if (DEBUG)
		std::cout
		<< "Creating Cure"
		<< std::endl;
}

Cure::Cure(Cure const &src) :
	AMateria(src._type)
{
	if (DEBUG)
		std::cout
		<< "Creating Cure"
		<< std::endl;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

Cure::~Cure(void)
{
	if (DEBUG)
		std::cout
		<< "Destroying Cure"
		<< std::endl;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	Cure::use(ICharacter &target)
{
	if (DEBUG)
		std::cout
		<< "Calling Cure::use()"
		<< std::endl;
	std::cout
	<< "* heals "
	<< target.getName()
	<< "'s wounds *"
	<< std::endl;
}

AMateria	*Cure::clone(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling Cure::clone()"
		<< std::endl;
	return new Cure(*this);
}

// ************************************************************************* //
//                                 Operators                                 //
// ************************************************************************* //

Cure	&Cure::operator=(Cure const &rhs)
{
	if (DEBUG)
		std::cout
		<< "Calling Cure::operator=()"
		<< std::endl;
	if (this != &rhs)
		this->AMateria::operator=(rhs);
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Cure const &rhs)
{
	o << "Cure:" << std::endl
	<< "\t" "type: " << rhs.getType() << std::endl;
	return o;
}
