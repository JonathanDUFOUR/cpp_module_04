/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 06:10:53 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/20 15:43:17 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/ICharacter.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

ICharacter::ICharacter(void)
{
	if (DEBUG)
		std::cout
		<< "Creating ICharacter"
		<< std::endl;
}

ICharacter::ICharacter(ICharacter const &src __attribute__((unused)))
{
	if (DEBUG)
		std::cout
		<< "Creating ICharacter"
		<< std::endl;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

ICharacter::~ICharacter(void)
{
	if (DEBUG)
		std::cout
		<< "Destroying ICharacter"
		<< std::endl;
}

// ************************************************************************* //
//                                 Operators                                 //
// ************************************************************************* //

ICharacter	&ICharacter::operator=(ICharacter const &rhs __attribute__((unused)))
{
	if (DEBUG)
		std::cout
		<< "Calling ICharacter::operator=()"
		<< std::endl;
	return *this;
}
