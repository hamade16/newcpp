/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houbeid <houbeid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 00:15:03 by houbeid           #+#    #+#             */
/*   Updated: 2022/02/24 00:15:04 by houbeid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON
# define WEAPON

#include <iostream>

class Weapon{
    public:
        std::string    getType(void);
        void    setType(std::string typ);
        Weapon(std::string type);
        ~Weapon(void);
        Weapon();
    private:
        std::string type;
};

#endif