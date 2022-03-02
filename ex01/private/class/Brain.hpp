/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 03:33:48 by jodufour          #+#    #+#             */
/*   Updated: 2022/03/02 19:20:11 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

# ifndef DEBUG
#  define DEBUG 0
# endif

typedef unsigned int	uint;

class Brain
{
private:
	// Attributes
	std::string	_ideas[100U];

public:
	// Constructors
	Brain(void);
	Brain(Brain const &src);

	// Destructors
	virtual ~Brain(void);

	// Accessors
	std::string const	&getIdea(uint const idx) const;

	// Operators
	Brain	&operator=(Brain const &rhs);
};

std::ostream	&operator<<(std::ostream &o, Brain const &rhs);

#endif
