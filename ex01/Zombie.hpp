/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:19:33 by yrigny            #+#    #+#             */
/*   Updated: 2024/06/25 16:19:35 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP
# include <iostream>

class Zombie {

    private:

        std::string name;

    public:

        Zombie(void);
        ~Zombie(void);

        void    nameZombie(std::string name);
        void    announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif
