/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 12:52:01 by yrigny            #+#    #+#             */
/*   Updated: 2024/07/02 12:52:03 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedPro.hpp"

void writeToFile(const std::string& filename, const std::string& content) {
    std::ofstream file(filename.c_str());
    if (!file) {
        std::cerr << "Error: Could not open file " << filename << " for writing." << std::endl;
        return;
    }
    file << content;
    file.close();
    if (!file.good()) {
        std::cerr << "Error: Could not write to file " << filename << std::endl;
    }
}

int main() {
    std::string excerpt1 = "";
    
    std::string excerpt2 = 
        "Call me Ishmael. Some years ago—never mind how long precisely—having little or no money in my purse, and nothing particular to interest me on shore, I thought I would sail about a little and see the watery part of the world.\n"
        "It is a way I have of driving off the spleen and regulating the circulation. Whenever I find myself growing grim about the mouth; whenever it is a damp, drizzly November in my soul; whenever I find myself involuntarily pausing before coffin warehouses, and bringing up the rear of every funeral I meet; and especially whenever my hypos get such an upper hand of me, that it requires a strong moral principle to prevent me from deliberately stepping into the street, and methodically knocking people's hats off—then, I account it high time to get to sea as soon as I can.\n";
    
    std::string excerpt3 = 
        "It was the best of times, it was the worst of times, it was the age of wisdom, it was the age of foolishness, it was the epoch of belief, it was the epoch of incredulity, it was the season of Light, it was the season of Darkness, it was the spring of hope, it was the winter of despair, we had everything before us, we had nothing before us, we were all going direct to Heaven, we were all going direct the other way—in short, the period was so far like the present period, that some of its noisiest authorities insisted on its being received, for good or for evil, in the superlative degree of comparison only.\n";
    
    writeToFile("file1", excerpt1);
    writeToFile("file2", excerpt2);
    writeToFile("file3", excerpt3);
    return 0;
}
