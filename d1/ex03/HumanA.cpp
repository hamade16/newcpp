/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houbeid <houbeid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 00:14:36 by houbeid           #+#    #+#             */
/*   Updated: 2022/02/24 00:14:37 by houbeid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"

HumanA::~HumanA(void)
{

}

HumanA::HumanA(std::string name, Weapon &weapon): weapon(weapon)
{
    this->name = name;
}

void    HumanA::attack(void)
{
    std::cout << name << " attacks with theire " << weapon.getType() << std::endl;

}
