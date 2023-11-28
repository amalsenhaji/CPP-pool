/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:02:38 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 18:28:56 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{

    public:
        Ice();
        ~Ice();

        Ice( Ice const & );
        Ice& operator=( Ice const & );

        virtual AMateria*   clone() const;
        virtual void        use(ICharacter& target);
};

#endif // ICE_HPP