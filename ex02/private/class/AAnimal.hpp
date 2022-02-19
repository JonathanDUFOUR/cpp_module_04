/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:34:05 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/29 05:24:30 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

# ifndef DEBUG
#  define DEBUG 0
# endif

class AAnimal
{
protected:
	// Attributes
	std::string	_type;

public:
	// Constructors
	AAnimal(std::string const &type = std::string("defaultType"));
	AAnimal(AAnimal const &src);

	// Destructors
	virtual ~AAnimal(void);

	// Accessors
	std::string const	&getType(void) const;

	// Member functions
	virtual void	makeSound(void) const = 0;

	// Operators
	AAnimal	&operator=(AAnimal const &rhs);
};

std::ostream	&operator<<(std::ostream &o, AAnimal const &rhs);

#endif
