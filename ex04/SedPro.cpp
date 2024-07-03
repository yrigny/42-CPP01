/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedPro.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 18:53:08 by yrigny            #+#    #+#             */
/*   Updated: 2024/06/28 18:53:09 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedPro.hpp"

int	SedPro(std::string& buffer, std::string filename, std::string s1, std::string s2) {
    if (s1 == "") {
        std::cerr << "Error: <s1> must not be empty string." << std::endl;
        return 1;
    }

    std::string     outfile = filename + ".replace";
    std::ofstream   file(outfile.c_str(), std::ofstream::out);
    if (!file) {
        std::cerr << "Error: Failed to create the replace file." << std::endl;
        return 1;
    }
    
    size_t  start = 0;
    size_t  pos = buffer.find(s1, start);
    while (pos != std::string::npos) {
        if (pos > start) {
            file.write(&buffer[start], pos - start);
        }
        file.write(s2.c_str(), s2.size());
        start = pos + s1.size();
        pos = buffer.find(s1, start);
    }
    if (start < buffer.size())
        file.write(&buffer[start], buffer.size() - start);
    file.close();
    return 0;
}
