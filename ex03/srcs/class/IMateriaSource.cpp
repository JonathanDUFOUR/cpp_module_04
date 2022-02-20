/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 09:53:46 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/20 15:43:58 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/IMateriaSource.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

IMateriaSource::IMateriaSource(void)
{
	if (DEBUG)
		std::cout
		<< "Creating IMateriaSource"
		<< std::endl;
}

IMateriaSource::IMateriaSource(IMateriaSource const &src __attribute__((unused)))
{
	if (DEBUG)
		std::cout
		<< "Creating IMateriaSource"
		<< std::endl;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

IMateriaSource::~IMateriaSource(void)
{
	if (DEBUG)
		std::cout
		<< "Destroying IMateriaSource "
		<< std::endl;
}

// ************************************************************************* //
//                                 Operators                                 //
// ************************************************************************* //

IMateriaSource	&IMateriaSource::operator=(IMateriaSource const &rhs __attribute__((unused)))
{
	if (DEBUG)
		std::cout
		<< "Calling IMateriaSource::operator=()"
		<< std::endl;
	return *this;
}
