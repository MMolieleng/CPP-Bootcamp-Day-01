/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 18:37:46 by mmoliele          #+#    #+#             */
/*   Updated: 2017/05/24 18:37:50 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string val ){
    type = val;
}
void    Weapon::setType( std::string val ){
    type = val;
}
std::string const Weapon::getType( void ){
    return (type);
}
