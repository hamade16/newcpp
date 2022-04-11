/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houbeid <houbeid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 00:14:31 by houbeid           #+#    #+#             */
/*   Updated: 2022/02/24 00:14:32 by houbeid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.h"

HumanB::HumanB(std::string name)
{
    this->name = name;
    return ;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void    HumanB::attack(void)
{
    std::cout << name << " attacks with theire " << weapon->getType() << std::endl;
}

HumanB::~HumanB(void)
{

}