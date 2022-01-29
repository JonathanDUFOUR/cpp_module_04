/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:34:32 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/29 05:30:06 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Dog.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

Dog::Dog(void) :
	AAnimal(std::string("dogType"))
{
	std::cout
	<< "Creating Dog "
	<< this->type
	<< std::endl;
	this->_mind = new Brain;
}

Dog::Dog(Dog const &src) :
	AAnimal(std::string("dogType"))
{
	std::cout
	<< "Creating Dog "
	<< this->type
	<< std::endl;
	*this = src;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

Dog::~Dog(void)
{
	std::cout
	<< "R.I.P. Dog "
	<< this->type
	<< std::endl;
	delete this->_mind;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	Dog::makeSound(void) const
{
	std::cout
	<< "Dog "
	<< this->type
	<< " is making a sound: Woof"
	<< std::endl;
}

// ************************************************************************** //
//                             Operator Overloads                             //
// ************************************************************************** //

Dog	&Dog::operator=(Dog const &rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Dog const &rhs)
{
	o << "Dog:" << std::endl
	<< "\t" "type: " << rhs.getType() << std::endl;
	return o;
}