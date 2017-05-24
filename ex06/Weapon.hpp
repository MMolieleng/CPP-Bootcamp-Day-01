/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 18:38:07 by mmoliele          #+#    #+#             */
/*   Updated: 2017/05/24 18:38:11 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP_INCLUDED__
#define __WEAPON_HPP_INCLUDED__

#include <iostream>

class Weapon{
    private:
        std::string type;
    public:
        Weapon(std::string val);
        void    setType( std::string val );
        std::string const getType( void );
};

#endif
