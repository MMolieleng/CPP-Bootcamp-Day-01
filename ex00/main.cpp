/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 07:43:33 by mmoliele          #+#    #+#             */
/*   Updated: 2017/05/24 09:17:49 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void	ponyOnTheStack()
{
	Pony pony = Pony(10, "Stack");
}

void	ponyOnTheHeap(int del)
{
	Pony *pony = new Pony(20, "Heap");
	if (del == 0)
		delete pony;
}

int	main(void)
{
	std::cout << "Creating pony and deleting pony instantly by calling the destructor"<<std::endl;
	ponyOnTheHeap(0);

	std::cout << "Creating pony on the STACK "<< std::endl;
	ponyOnTheStack();

	std::cout << "Creating an immprtal pony  "<< std::endl;
	ponyOnTheHeap(1);

	return (0);
}
