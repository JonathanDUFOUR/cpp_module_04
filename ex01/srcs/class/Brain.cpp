/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 03:35:34 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/19 21:39:56 by jodufour         ###   ########.fr       */
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

Brain::Brain(Brain const &src) :
	_ideas(src._ideas)
{
	if (DEBUG)
		std::cout
		<< "Creating Brain"
		<< std::endl;
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

std::string const	&Brain::getIdea(unsigned int idx) const
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
	unsigned int	i;

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
	unsigned int	i;

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
