/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 16:01:06 by mmoliele          #+#    #+#             */
/*   Updated: 2017/05/24 18:10:37 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){}

Brain::~Brain(){}

std::string	Brain::identify() const
{
	const void *addr = static_cast<const void*>(this);
	std::ostringstream	ss;

	ss << (void const*)this;
	
	std::string ad = ss.str();

	return (ad);
}
