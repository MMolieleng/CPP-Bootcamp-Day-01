/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 15:28:22 by mmoliele          #+#    #+#             */
/*   Updated: 2017/05/24 15:45:45 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string s = "HI THIS IS BRAIN";

	std::string*	ptr = &s;

	std::string&	ref = s;

	std::cout<< *ptr <<std::endl;

	std::cout<< ref <<std::endl;

	return (0);
}
