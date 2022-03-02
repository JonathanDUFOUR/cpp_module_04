/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 03:35:34 by jodufour          #+#    #+#             */
/*   Updated: 2022/03/02 19:26:14 by jodufour         ###   ########.fr       */
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
	uint	idx(0);

	if (DEBUG)
		std::cout
		<< "Creating Brain"
		<< std::endl;
	for ( ; idx < 100 ; ++idx)
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
//                                 Accessors                                 //
// ************************************************************************* //

std::string	const &Brain::getIdea(uint const idx) const
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
	uint	idx(0);

	if (DEBUG)
		std::cout
		<< "Calling Brain::operator=()"
		<< std::endl;
	if (this != &rhs)
		for ( ; idx < 100 ; ++idx)
			this->_ideas[idx] = rhs._ideas[idx];
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Brain const &rhs)
{
	uint	idx(0);

	o << "Brain:" << std::endl
	<< "\t" "ideas: {";
	while (idx < 100)
	{
		o << rhs.getIdea(idx);
		if (++idx < 100)
			o << ", ";
	}
	o << "}" << std::endl;
	return o;
}
