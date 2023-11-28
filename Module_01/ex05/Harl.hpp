/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:02:22 by amsenhaj          #+#    #+#             */
/*   Updated: 2022/07/20 11:24:03by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class   Harl
{
private:
    void    debug( void );
    void    info( void );
    void    warning( void );
    void    error( void );


public:
    Harl();
    ~Harl();

    void        complain( std:: string level );

};

typedef void (Harl::*t_func) ( void );
