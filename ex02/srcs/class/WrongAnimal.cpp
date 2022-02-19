/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 02:15:15 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/19 22:38:01 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/WrongAnimal.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

WrongAnimal::WrongAnimal(std::string const &type) :
	_type(type)
{
	if (DEBUG)
		std::cout
		<< "Creating WrongAnimal "
		<< this->_type
		<< std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) :
	_type(src._type)
{
	if (DEBUG)
		std::cout
		<< "Creating WrongAnimal "
		<< this->_type
		<< std::endl;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

WrongAnimal::~WrongAnimal(void)
{
	if (DEBUG)
		std::cout
		<< "Destroying WrongAnimal"
		<< std::endl;
}

// ************************************************************************* //
//                                 Accessors                                 //
// ************************************************************************* //

std::string const	&WrongAnimal::getType(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling WrongAnimal::getType()"
		<< std::endl;
	return this->_type;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	WrongAnimal::makeSound(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling WrongAnimal::makeSound()"
		<< std::endl;
	std::cout
	<< "WrongAnimal "
	<< this->_type
	<< " is making a sound: ..."
	<< std::endl;
}

// ************************************************************************* //
//                                 Operators                                 //
// ************************************************************************* //

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs)
{
	if (DEBUG)
		std::cout
		<< "Calling WrongAnimal::operator=()"
		<< std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

std::ostream	&operator<<(std::ostream &o, WrongAnimal const &rhs)
{
	o << "WrongAnimal:" << std::endl
	<< "\t" "type: " << rhs.getType() << std::endl;
	return o;
}
