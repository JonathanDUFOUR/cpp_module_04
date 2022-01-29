/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 06:10:53 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/29 09:07:56 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/ICharacter.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

ICharacter::ICharacter(void) :
	_name("defaultName")
{
	std::cout
	<< "Creating ICharacter "
	<< this->_name
	<< std::endl;
}

ICharacter::ICharacter(ICharacter const &src) :
	_name(src._name)
{
	std::cout
	<< "Creating ICharacter "
	<< this->_name
	<< std::endl;
	*this = src;
}

ICharacter::ICharacter(std::string const name) :
	_name(name)
{
	std::cout
	<< "Creating ICharacter "
	<< this->_name
	<< std::endl;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

ICharacter::~ICharacter(void)
{
	std::cout
	<< "Destroying ICharacter "
	<< this->_name
	<< std::endl;
}

// ************************************************************************** //
//                             Operator Overloads                             //
// ************************************************************************** //

ICharacter	&ICharacter::operator=(ICharacter const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &o, ICharacter const &rhs)
{
	o << "ICharacter:" << std::endl
	<< "\t" "name: " << rhs.getName() << std::endl;
	return o;
}
