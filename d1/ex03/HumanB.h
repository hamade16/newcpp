/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houbeid <houbeid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 00:14:46 by houbeid           #+#    #+#             */
/*   Updated: 2022/02/24 00:14:47 by houbeid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB
# define HUMANB

#include <iostream>
#include "Weapon.h"

class HumanB{
    public:
        HumanB(std::string name);
        HumanB(void);
        Weapon *weapon;
        std::string name;
        void  attack(void);
        void    setWeapon(Weapon &weapon);
        ~HumanB(void);
};
#endif