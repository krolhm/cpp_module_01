/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 20:23:12 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/10 17:27:52 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(int neurons, int hormones)
{
    _neurons = neurons;
    _hormones = hormones;
}

Brain::~Brain()
{
    
}

std::string Brain::identify() const
{
    std::stringstream ss;
    std::string str;

    ss << this;
    str = ss.str();

    return (str);
}
