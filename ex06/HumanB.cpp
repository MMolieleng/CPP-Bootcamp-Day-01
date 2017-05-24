/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 18:37:26 by mmoliele          #+#    #+#             */
/*   Updated: 2017/05/24 18:37:29 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon& mainWeap){
    this->name = name;
    wep = &mainWeap;
}
HumanB::HumanB(std::string name){
    this->name = name;
}
void    HumanB::setWeapon(Weapon& val){
    wep = &val;
}
void    HumanB::attack(){
    std::cout << this->name << " attacks with his " << wep->getType() << std::endl;
}
