/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:34:15 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/19 18:42:15 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Animal.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

Animal::Animal(std::string const &type) :
	_type(type)
{
	if (DEBUG)
		std::cout
		<< "Creating Animal "
		<< this->_type
		<< std::endl;
}

Animal::Animal(Animal const &src) :
	_type(src._type)
{
	if (DEBUG)
		std::cout
		<< "Creating Animal "
		<< this->_type
		<< std::endl;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

Animal::~Animal(void)
{
	if (DEBUG)
		std::cout
		<< "Destroying Animal "
		<< this->_type
		<< std::endl;
}

// ************************************************************************* //
//                                 Accessors                                 //
// ************************************************************************* //

std::string const	&Animal::getType(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling Animal::getType()"
		<< std::endl;
	return this->_type;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	Animal::makeSound(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling Animal::makeSound()"
		<< std::endl;
	std::cout
	<< "Animal "
	<< this->_type
	<< " is making a sound: ..."
	<< std::endl;
}

// ************************************************************************* //
//                                 Operators                                 //
// ************************************************************************* //

Animal	&Animal::operator=(Animal const &rhs)
{
	if (DEBUG)
		std::cout
		<< "Calling Animal::operator=()"
		<< std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Animal const &rhs)
{
	o << "Animal:" << std::endl
	<< "\t" "type: " << rhs.getType() << std::endl;
	return o;
}
