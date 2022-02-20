/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:34:32 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/20 18:42:57 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Dog.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

Dog::Dog(void) :
	AAnimal(std::string("Dog")),
	_mind(new Brain)
{
	if (DEBUG)
		std::cout
		<< "Creating Dog "
		<< this->_type
		<< std::endl;
}

Dog::Dog(Dog const &src) :
	AAnimal(src._type),
	_mind(new Brain(*src._mind))
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
	delete this->_mind;
}

// ************************************************************************* //
//                                 Accessors                                 //
// ************************************************************************* //

Brain const	&Dog::getMind(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling Dog::getMind()"
		<< std::endl;
	return *this->_mind;
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
	<< "\t" "type: " << rhs.getType() << std::endl
	<< "\t" "mind: " << rhs.getMind() << std::endl;
	return o;
}
