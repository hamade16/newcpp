/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houbeid <houbeid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 00:14:40 by houbeid           #+#    #+#             */
/*   Updated: 2022/02/24 00:14:41 by houbeid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA
# define HUMANA

#include <iostream>
#include "Weapon.h"

class HumanA{
  private:
      std::string name;

    public:
      Weapon &weapon;
      HumanA(std::string name, Weapon &weapon);
      void  attack(void);
      ~HumanA(void);
};
#endif