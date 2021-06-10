/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 20:23:24 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/10 17:27:26 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
#include <sstream>

class Brain
{
    public:
        Brain(int neurons, int hormones);
        ~Brain();
        std::string identify(void) const;

    private:
        int _neurons;
        int _hormones;
};

#endif