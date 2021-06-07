/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 10:38:09 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/07 17:46:10 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack()
{
	std::cout << "Creation of Pony on the stack" << std::endl;
	Pony pony("Choupi", 120, 2);
	pony.feed();
	pony.walk();
	pony.sleep();
	std::cout << "End of creation of Pony on the stack" << std::endl;
}

void	ponyOnTheHeap()
{
	std::cout << "Creation of Pony on the heap" << std::endl;
	Pony *pony = new Pony ("Caillou", 100, 3);
	pony->feed();
	pony->walk();
	pony->sleep();
	delete pony;
	std::cout << "End of creation of Pony on the heap" << std::endl;
}

int		main()
{
	ponyOnTheStack();
	std::cout << "==========" << std::endl;
	ponyOnTheHeap();
	return (0);
}
