/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 03:22:35 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/29 05:39:09 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "class/WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	// Constructors
	WrongCat(void);
	WrongCat(WrongCat const &src);

	// Destructors
	virtual ~WrongCat(void);

	// Member functions
	void	makeSound(void) const;

	// Operator overloads
	WrongCat	&operator=(WrongCat const &rhs);
};

std::ostream	&operator<<(std::ostream &o, WrongCat const &rhs);


#endif
