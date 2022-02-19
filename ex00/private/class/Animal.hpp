/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:34:05 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/18 10:09:28 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

# ifndef DEBUG
#  define DEBUG 0
# endif

class Animal
{
protected:
	// Attributes
	std::string	_type;

public:
	// Constructors
	Animal(std::string const &type = std::string("defaultType"));
	Animal(Animal const &src);

	// Destructors
	virtual ~Animal(void);

	// Accessors
	std::string const	&getType(void) const;

	// Member functions
	virtual void	makeSound(void) const;

	// Operators
	Animal	&operator=(Animal const &rhs);
};

std::ostream	&operator<<(std::ostream &o, Animal const &rhs);

#endif
