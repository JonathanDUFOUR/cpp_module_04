/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:33:34 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/29 05:30:06 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "class/AAnimal.hpp"
# include "class/Brain.hpp"

class Dog : public AAnimal
{
private:
	Brain	*_mind;

protected:

public:
	// Constructors
	Dog(void);
	Dog(Dog const &src);

	// Destructors
	virtual ~Dog(void);

	// Member functions
	void	makeSound(void) const;

	// Operator overloads
	Dog	&operator=(Dog const &rhs);
};

std::ostream	&operator<<(std::ostream &o, Dog const &rhs);

#endif
