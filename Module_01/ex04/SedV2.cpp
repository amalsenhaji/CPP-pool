/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedV2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:11:23 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 18:27:22 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedV2.hpp"

SedV2::SedV2(std::string filename) : _inFile(filename){
    this->_outFile = this->_inFile + ".replace";
}

SedV2::~SedV2 ( void ) {

}

void            SedV2::replace( std::string toFind, std::string replace) {
    std::ifstream   ifs(this->_inFile);
    if (ifs.is_open()) {
        std::string content;
        if (std::getline(ifs, content, '\0')) {
            std::ofstream   ofs(this->_outFile);
            size_t          pos = content.find(toFind);
            while ( pos != std::string::npos ) {
                content.erase(pos, toFind.length());
                content.insert(pos, replace);
                pos = content.find(toFind);
            }
            ofs << content;
            ofs.close();
        }
        else {
            std::cerr << "Empty file found." << std::endl;
        }
        ifs.close();
    } else {
        std::cerr << "Unable to open the file." << std::endl;
        exit(EXIT_FAILURE);
    }
}
