/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 03:35:34 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/07 04:20:05 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Brain.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

Brain::Brain(void)
{
	std::cout
	<< "Creating Brain"
	<< std::endl;
}

Brain::Brain(Brain const &src)
{
	std::cout
	<< "Creating Brain"
	<< std::endl;
	*this = src;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

Brain::~Brain(void)
{
	std::cout
	<< "Brain has been destroyed"
	<< std::endl;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	Brain::setIdeas(std::string const *ideas)
{
	int	i;

	for ( i = 0 ; i < 100 ; ++i)
		this->_ideas[i] = ideas[i];
}

std::string	*Brain::getIdeas(void) const
{
	return (std::string *)this->_ideas;
}

// ************************************************************************* //
//                                 Operators                                 //
// ************************************************************************* //

Brain	&Brain::operator=(Brain const &rhs)
{
	unsigned int	i;

	if (this != &rhs)
	{
		for (i = 0 ; i < 100 ; ++i)
			this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Brain const &rhs)
{
	unsigned int	i;

	o << "Brain:" << std::endl
	<< "\t" "_ideas: ";
	for(i = 0 ; i < 100 ; ++i)
		o << rhs.getIdeas()[i];
	return o;
}
