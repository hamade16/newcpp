/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houbeid <houbeid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 00:14:59 by houbeid           #+#    #+#             */
/*   Updated: 2022/02/24 00:15:00 by houbeid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

Weapon::Weapon(void)
{

}

Weapon::Weapon(std::string type)
{
    this->type = type;
    return ;
}

Weapon::~Weapon(void)
{

}

void    Weapon::setType(std::string type)
{
    this->type = type;
}

std::string Weapon::getType(void)
{
    return type;
}
