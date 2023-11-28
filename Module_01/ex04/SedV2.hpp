/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedV2.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:08:46 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 18:27:23 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEDV2_HPP
#define SEDV2_HPP

#include <iostream>
#include <fstream>

class SedV2
{
private:
    std::string _inFile;
    std::string _outFile;

public:
    SedV2( std::string filename);
    ~SedV2();

    void            replace( std::string s1, std::string s2);
};

#endif // SEDV2_HPP