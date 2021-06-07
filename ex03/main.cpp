/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 18:40:27 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/07 19:13:19 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main()
{
    std::srand(std::time(nullptr));
    
    ZombieHorde HollyHorde(20);
    HollyHorde.announce();

    return (0);
}