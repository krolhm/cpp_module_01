/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 17:45:09 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/07 18:39:30 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
    std::srand(std::time(nullptr));

    ZombieEvent ZE = ZombieEvent("Common");
    Zombie *Z1 = ZE.newZombie("Toby");

    Z1->announce();
    ZE.setZombieType("Rare");

    std::cout << std::endl;

    Zombie *Z2 = ZE.newZombie("Hush");

    Z1->announce();
    Z2->announce();
    ZE.randomChump();
    
    std::cout << std::endl;

    ZE.setZombieType("Epic");

    Z1->announce();
    Z2->announce();
    ZE.randomChump();

    delete Z1;
    delete Z2;

    return (0);
}