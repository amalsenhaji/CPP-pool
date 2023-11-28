/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:44:44 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 18:27:14 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( void )
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << &str << ": " << str << std::endl;
    std::cout << stringPTR << ": " << *stringPTR << std::endl;
    std::cout << &stringREF << ": " << stringREF << std::endl;

    return 0;
}