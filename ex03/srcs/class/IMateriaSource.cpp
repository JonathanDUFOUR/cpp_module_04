/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 09:53:46 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/31 18:05:38 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/IMateriaSource.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

IMateriaSource::IMateriaSource(void)
{
	std::cout
	<< "Creating IMateriaSource "
	<< std::endl;
}

IMateriaSource::IMateriaSource(IMateriaSource const &src)
{
	std::cout
	<< "Creating IMateriaSource "
	<< std::endl;
	*this = src;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

IMateriaSource::~IMateriaSource(void)
{
	std::cout
	<< "Destroying IMateriaSource "
	<< std::endl;
}

// ************************************************************************** //
//                             Operator Overloads                             //
// ************************************************************************** //

IMateriaSource	&IMateriaSource::operator=(IMateriaSource const &rhs __attribute__((unused)))
{
	return *this;
}
