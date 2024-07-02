/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:08:28 by yrigny            #+#    #+#             */
/*   Updated: 2024/07/02 16:08:29 by yrigny           ###   ########.fr       */
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

        int     filterLevel;

        Harl();
        ~Harl();

		void	setFilterLevel(std::string filter);
        void    complain(std::string level);
};

#endif
