/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:34:05 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/29 02:06:46 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
private:

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

	// Operator overloads
	Animal	&operator=(Animal const &rhs);
};

std::ostream	&operator<<(std::ostream &o, Animal const &rhs);

#endif
