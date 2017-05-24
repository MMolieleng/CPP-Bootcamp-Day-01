/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 07:43:24 by mmoliele          #+#    #+#             */
/*   Updated: 2017/05/24 08:34:39 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONY_H
# define PHONY_H
# include <iostream>
# include <string>

class Pony
{
	public:
		Pony(int, std::string);
		~Pony();
	
	private:
		int	_height;
		std::string _name;
};
#endif
