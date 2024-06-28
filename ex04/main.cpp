/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:55:47 by yrigny            #+#    #+#             */
/*   Updated: 2024/06/26 15:55:49 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedPro.hpp"

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cerr << "Usage: ./SedPro <filename> <s1> <s2>" << std::endl;
        return 0;
    }
    std::ifstream   file(argv[1], std::ios::in);
    if (!file) {
        std::cerr << "Error: Failed to open file." << std::endl;
        return 1;
    }
    file.seekg(0, file.end);
    int length = file.tellg();
    file.seekg(0, file.beg);
    std::string buffer(length, '\0');
    file.read(&buffer[0], length);
    if (!file) {
        std::cerr << "Error: Failed to read the entire file." << std::endl;
        file.close();
        return 1;
    }
    file.close();
    return SedPro(buffer, argv[1], argv[2], argv[3]);
}
