/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 03:35:34 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/25 10:15:42 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Brain.hpp"

typedef unsigned int	uint;

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
	int	idx;

	if (DEBUG)
		std::cout
		<< "Creating Brain"
		<< std::endl;
	for (idx = 0 ; idx < 100 ; ++idx)
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

std::string	const &Brain::getIdea(int const idx) const
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
	uint	i;

	if (DEBUG)
		std::cout
		<< "Calling Brain::operator=()"
		<< std::endl;
	if (this != &rhs)
		for (i = 0 ; i < 100 ; ++i)
			this->_ideas[i] = rhs._ideas[i];
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Brain const &rhs)
{
	int	i;

	o << "Brain:" << std::endl
	<< "\t" "ideas: {";
	i = 0;
	while (i < 100)
	{
		o << rhs.getIdea(i);
		if (++i < 100)
			o << ", ";
	}
	o << "}" << std::endl;
	return o;
}
