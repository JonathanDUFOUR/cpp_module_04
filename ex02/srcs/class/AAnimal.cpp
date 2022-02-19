/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:34:15 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/29 05:24:59 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/AAnimal.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

AAnimal::AAnimal(std::string const &type) :
	_type(type)
{
	if (DEBUG)
		std::cout
		<< "Creating AAnimal "
		<< this->_type
		<< std::endl;
}

AAnimal::AAnimal(AAnimal const &src) :
	_type(src._type)
{
	if (DEBUG)
		std::cout
		<< "Creating AAnimal "
		<< this->_type
		<< std::endl;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

AAnimal::~AAnimal(void)
{
	if (DEBUG)
		std::cout
		<< "Destroying AAnimal"
		<< std::endl;
}

// ************************************************************************* //
//                                 Accessors                                 //
// ************************************************************************* //

std::string const	&AAnimal::getType(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling AAnimal::getType()"
		<< std::endl;
	return this->_type;
}

// ************************************************************************* //
//                                 Operators                                 //
// ************************************************************************* //

AAnimal	&AAnimal::operator=(AAnimal const &rhs)
{
	if (DEBUG)
		std::cout
		<< "Calling AAnimal::operator=()"
		<< std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

std::ostream	&operator<<(std::ostream &o, AAnimal const &rhs)
{
	o << "AAnimal:" << std::endl
	<< "\t" "type: " << rhs.getType() << std::endl;
	return o;
}
