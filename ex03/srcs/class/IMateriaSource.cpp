/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 09:53:46 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/29 09:56:22 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/IMateriaSource.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

IMateriaSource::IMateriaSource(void) :
	AMateria()
{
	std::cout
	<< "Creating IMateriaSource"
	<< std::endl;
}

IMateriaSource::IMateriaSource(IMateriaSource const &src) :
	AMateria(src.type)
{
	std::cout
	<< "Creating IMateriaSource"
	<< std::endl;
}

