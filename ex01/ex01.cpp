/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 18:04:23 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/07 16:31:41 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void memoryLeak()
{
    std::string *panthere = new std::string("String panthere");
    std::cout << *panthere << std::endl;
    delete panthere;
}

int main()
{
    memoryLeak();
    return (0);
}