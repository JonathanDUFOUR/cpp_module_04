/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 05:41:55 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/29 06:01:52 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/AMateria.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

AMateria::AMateria(void)
{
	std::cout
	<< "Creating AMateria"
	<< std::endl;
}

AMateria::AMateria(AMateria const &src)
{
	std::cout
	<< "Creating AMateria"
	<< std::endl;
	*this = src;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

AMateria::~AMateria(void)
{
	std::cout
	<< "Destroying AMateria"
	<< std::endl;
}

// ************************************************************************* //
//                                 Accessors                                 //
// ************************************************************************* //

std::string const	&AMateria::getType(void) const
{
	return this->type;
}

// ************************************************************************** //
//                             Operator Overloads                             //
// ************************************************************************** //

AMateria	&AMateria::operator=(AMateria const &rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &o, AMateria const &rhs)
{
	o << "AMateria:" << std::endl
	<< "\t" "type: " << rhs.getType() << std::endl;
	return o;
}
