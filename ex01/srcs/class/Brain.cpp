/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 03:35:34 by jodufour          #+#    #+#             */
/*   Updated: 2022/03/02 21:17:15 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Brain.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

Brain::Brain(void)
{
	if (DEBUG)
		std::cout
		<< "Creating Brain"
		<< std::endl;
}

Brain::Brain(Brain const &src)
{
	uint idx(0U);

	if (DEBUG)
		std::cout
		<< "Creating Brain"
		<< std::endl;
	for ( ; idx < 100U ; ++idx)
		this->_ideas[idx] = src._ideas[idx];
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

Brain::~Brain(void)
{
	if (DEBUG)
		std::cout
		<< "Destroying Brain"
		<< std::endl;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

std::string const	&Brain::getIdea(uint const idx) const
{
	if (DEBUG)
		std::cout
		<< "Calling Brain::getIdea()"
		<< std::endl;
	return (std::string const &)this->_ideas[idx];
}

// ************************************************************************* //
//                                 Operators                                 //
// ************************************************************************* //

Brain	&Brain::operator=(Brain const &rhs)
{
	uint	idx(0U);

	if (DEBUG)
		std::cout
		<< "Calling Brain::operator=()"
		<< std::endl;
	if (this != &rhs)
		for ( ; idx < 100U ; ++idx)
			this->_ideas[idx] = rhs._ideas[idx];
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Brain const &rhs)
{
	uint	idx(0U);

	o << "Brain:" << std::endl
	<< "\t" "ideas: {";
	while (idx < 100U)
	{
		o << rhs.getIdea(idx);
		if (++idx < 100U)
			o << ", ";
	}
	o << "}" << std::endl;
	return o;
}
