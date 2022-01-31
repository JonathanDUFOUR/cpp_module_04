/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 06:10:53 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/31 18:05:00 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/ICharacter.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

ICharacter::ICharacter(void)
{
	std::cout
	<< "Creating ICharacter"
	<< std::endl;
}

ICharacter::ICharacter(ICharacter const &src)
{
	std::cout
	<< "Creating ICharacter"
	<< std::endl;
	*this = src;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

ICharacter::~ICharacter(void)
{
	std::cout
	<< "Destroying ICharacter"
	<< std::endl;
}

// ************************************************************************** //
//                             Operator Overloads                             //
// ************************************************************************** //

ICharacter	&ICharacter::operator=(ICharacter const &rhs __attribute__((unused)))
{
	return *this;
}
