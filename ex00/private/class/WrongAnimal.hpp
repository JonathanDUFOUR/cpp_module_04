/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 03:19:35 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/20 17:45:04 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

# ifndef DEBUG
#  define DEBUG 0
# endif

class WrongAnimal
{
protected:
	// Attributes
	std::string	_type;

public:
	// Constructors
	WrongAnimal(std::string const &type = std::string("defaultType"));
	WrongAnimal(WrongAnimal const &src);

	// Destructors
	virtual ~WrongAnimal(void);

	// Accessors
	std::string const	&getType(void) const;

	// Member functions
	void	makeSound(void) const;

	// Operators
	WrongAnimal	&operator=(WrongAnimal const &rhs);
};

std::ostream	&operator<<(std::ostream &o, WrongAnimal const &rhs);

#endif
