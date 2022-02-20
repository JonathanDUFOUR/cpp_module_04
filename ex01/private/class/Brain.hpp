/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 03:33:48 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/20 18:12:44 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

# ifndef DEBUG
#  define DEBUG 0
# endif

class Brain
{
private:
	// Attributes
	std::string	_ideas[100];

public:
	// Constructors
	Brain(void);
	Brain(Brain const &src);

	// Destructors
	virtual ~Brain(void);

	// Accessors
	std::string const	&getIdea(int const idx) const;

	// Operators
	Brain	&operator=(Brain const &rhs);
};

std::ostream	&operator<<(std::ostream &o, Brain const &rhs);

#endif
