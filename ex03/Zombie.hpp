/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 18:40:47 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/07 19:10:47 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    public:
        Zombie(std::string name = "Unknow", std::string type = "Unknow");
        ~Zombie();
        void announce(void);
        void setName(std::string name);
        void setType(std::string type);

    private:
        std::string _name;
        std::string _type;
};

#endif