/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 18:35:34 by mmoliele          #+#    #+#             */
/*   Updated: 2017/05/24 18:35:38 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& mainWeap){
    this->name = name;
    wep = &mainWeap;
}
HumanA::HumanA(std::string name){
    this->name = name;
}
void    HumanA::setWeapon(Weapon& val){
    wep = &val;
}
void    HumanA::attack(){
    std::cout << this->name << " attacks with his " << wep->getType() << std::endl;
}
