/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:34:05 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/07 03:50:39 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
protected:
	// Attributes
	std::string	type;

public:
	// Constructors
	Animal(void);
	Animal(Animal const &src);
	Animal(std::string const type);

	// Destructors
	virtual ~Animal(void);

	// Accessors
	std::string	getType(void) const;

	// Member functions
	virtual void	makeSound(void) const;

	// Operators
	Animal	&operator=(Animal const &rhs);
};

std::ostream	&operator<<(std::ostream &o, Animal const &rhs);

#endif
