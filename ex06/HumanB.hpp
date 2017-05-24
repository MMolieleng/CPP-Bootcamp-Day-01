/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 18:36:32 by mmoliele          #+#    #+#             */
/*   Updated: 2017/05/24 18:37:08 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_HPP_INCLUDED__
#define __HUMANB_HPP_INCLUDED__

#include <iostream>
#include "Weapon.hpp"

class HumanB{
    private:
        Weapon* wep;
        std::string name;
    public:
        HumanB(std::string name, Weapon& mainWeap);
        HumanB(std::string name);
        void    setWeapon(Weapon& val);
        void    attack();
};

#endif
