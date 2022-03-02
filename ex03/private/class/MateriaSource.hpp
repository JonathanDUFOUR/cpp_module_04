/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 12:50:00 by jodufour          #+#    #+#             */
/*   Updated: 2022/03/02 19:37:06 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "class/IMateriaSource.hpp"

# ifndef DEBUG
#  define DEBUG 0
# endif

typedef unsigned int	uint;

class MateriaSource : public IMateriaSource
{
private:
	// Attributes
	AMateria					*_memory[4U];

	static std::string const	_emptyType;

public:
	// Constructors
	MateriaSource(void);
	MateriaSource(MateriaSource const &src);

	// Destructors
	virtual ~MateriaSource(void);

	// Accessors
	std::string const	&getSlotType(uint const idx) const;

	// Member functions
	void		learnMateria(AMateria *m);

	AMateria	*createMateria(std::string const &type);

	// Operators
	MateriaSource	&operator=(MateriaSource const &rhs);
};

std::ostream	&operator<<(std::ostream &o, MateriaSource const &rhs);


#endif
