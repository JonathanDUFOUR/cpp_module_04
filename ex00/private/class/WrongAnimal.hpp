/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 03:19:35 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/07 03:50:39 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
protected:
	// Attributes
	std::string	type;

public:
	// Constructors
	WrongAnimal(void);
	WrongAnimal(WrongAnimal const &src);
	WrongAnimal(std::string const type);

	// Destructors
	virtual ~WrongAnimal(void);

	// Accessors
	std::string	getType(void) const;

	// Member functions
	void	makeSound(void) const;

	// Operators
	WrongAnimal	&operator=(WrongAnimal const &rhs);
};

std::ostream	&operator<<(std::ostream &o, WrongAnimal const &rhs);

#endif
