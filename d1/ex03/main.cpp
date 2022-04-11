/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houbeid <houbeid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 00:14:50 by houbeid           #+#    #+#             */
/*   Updated: 2022/02/24 00:14:51 by houbeid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"
#include "HumanB.h"

int main()
{
    {
    Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob ", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }

    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();

    
    return 0;
}