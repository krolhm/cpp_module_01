/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 17:42:45 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/07 18:36:09 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "Zombie.hpp"

class ZombieEvent
{
    public:
        ZombieEvent(std::string type);
        ~ZombieEvent();
        void setZombieType(std::string type);
        Zombie *newZombie(std::string name);
        void randomChump(void);
    
    private:
        std::string _type;
};

#endif