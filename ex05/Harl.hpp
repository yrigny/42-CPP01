/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 12:53:18 by yrigny            #+#    #+#             */
/*   Updated: 2024/07/02 12:53:19 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
    private:

        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);

    public:

        Harl(void);
        ~Harl();

        void    complain(std::string level);
};

#endif
