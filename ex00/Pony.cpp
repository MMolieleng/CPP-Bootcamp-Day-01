/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 07:42:55 by mmoliele          #+#    #+#             */
/*   Updated: 2017/05/24 08:33:45 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(int height, std::string name):_height(height), _name(name)
{
	std::cout<<"Pony "<<this->_name<<" of height "<<this->_height<<" created"<<std::endl;
}

Pony::~Pony()
{
	std::cout<<"Pony "<<this->_name<<" of height "<<this->_height<<" deleted "<<std::endl;
}
