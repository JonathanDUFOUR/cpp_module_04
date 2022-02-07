/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 09:53:46 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/07 04:23:45 by jodufour         ###   ########.fr       */
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

// ************************************************************************* //
//                                 Operators                                 //
// ************************************************************************* //

IMateriaSource	&IMateriaSource::operator=(IMateriaSource const &rhs __attribute__((unused)))
{
	return *this;
}
