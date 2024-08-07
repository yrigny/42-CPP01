/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 12:52:35 by yrigny            #+#    #+#             */
/*   Updated: 2024/07/02 12:52:36 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "Usage: ./Harl DEBUG/INFO/WARNING/ERROR" << std::endl;
        return 0;
    }
    Harl    obj;
    obj.complain(argv[1]);
    return 0;
}
