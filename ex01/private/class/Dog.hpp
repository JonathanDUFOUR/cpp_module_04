/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:33:34 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/07 03:50:39 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "class/Animal.hpp"
# include "class/Brain.hpp"

class Dog : public Animal
{
private:
	// Attributes
	Brain	*_mind;

public:
	// Constructors
	Dog(void);
	Dog(Dog const &src);

	// Destructors
	virtual ~Dog(void);

	// Member functions
	void	makeSound(void) const;

	// Operators
	Dog	&operator=(Dog const &rhs);
};

std::ostream	&operator<<(std::ostream &o, Dog const &rhs);

#endif
