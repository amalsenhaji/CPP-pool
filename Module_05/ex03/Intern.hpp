/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:50:23 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 18:29:27 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"

class Intern {

public:
    Intern();
    Intern( const Intern& src );
    ~Intern();

    Intern& operator=( const Intern& rhs );

    Form*   makeForm( std::string name, std::string target );
};

#endif // INTERN_HPP