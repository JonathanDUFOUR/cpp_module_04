/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 03:33:48 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/30 17:06:20 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

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
	void		setIdeas(std::string const *ideas);

	std::string	*getIdeas(void) const;

	// Operator overloads
	Brain	&operator=(Brain const &rhs);
};

std::ostream	&operator<<(std::ostream &o, Brain const &rhs);

#endif
