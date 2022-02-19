/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:34:32 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/18 10:08:04 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Dog.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

Dog::Dog(void) :
	Animal(std::string("dogType"))
{
	if (DEBUG)
		std::cout
		<< "Creating Dog "
		<< this->_type
		<< std::endl;
}

Dog::Dog(Dog const &src) :
	Animal(src._type)
{
	if (DEBUG)
		std::cout
		<< "Creating Dog "
		<< this->_type
		<< std::endl;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

Dog::~Dog(void)
{
	if (DEBUG)
		std::cout
		<< "Destroying Dog "
		<< this->_type
		<< std::endl;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	Dog::makeSound(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling Dog::makeSound()"
		<< std::endl;
	std::cout
	<< "Dog "
	<< this->_type
	<< " is making a sound: Woof"
	<< std::endl;
}

// ************************************************************************* //
//                                 Operators                                 //
// ************************************************************************* //

Dog	&Dog::operator=(Dog const &rhs)
{
	if (DEBUG)
		std::cout
		<< "Calling Dog::operator=()"
		<< std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Dog const &rhs)
{
	o << "Dog:" << std::endl
	<< "\t" "type: " << rhs.getType() << std::endl;
	return o;
}
