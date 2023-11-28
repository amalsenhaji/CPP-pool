/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:53:34 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 18:28:51 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"
# include <iostream>

class ICharacter;

class AMateria
{
protected:
    std::string _type;
public:
    AMateria();
    AMateria(std::string const & type);
    AMateria(AMateria const & src);
    virtual ~AMateria();

    std::string const & getType() const;
    virtual AMateria*   clone() const = 0;
    virtual void        use(ICharacter& target);
};

#endif // AMATERIA_HPP 