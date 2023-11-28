/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:39:04 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 18:29:03 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void )
{
    try {
        Bureaucrat bureaucrat("ash", 1);

        std::cout << bureaucrat << std::endl;

        bureaucrat.incrementGrade();
        // bureaucrat.decrementGrade();
    } catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }
    return EXIT_SUCCESS;
}