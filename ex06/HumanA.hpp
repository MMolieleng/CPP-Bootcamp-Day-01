/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 18:36:10 by mmoliele          #+#    #+#             */
/*   Updated: 2017/05/24 18:36:15 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_HPP_INCLUDED__
#define __HUMANA_HPP_INCLUDED__

#include <iostream>
#include "Weapon.hpp"

class HumanA{
    private:
        Weapon* wep;
        std::string name;
    public:
        HumanA(std::string name, Weapon& mainWeap);
        HumanA(std::string name);
        void    setWeapon(Weapon& val);
        void    attack();
};

#endif
