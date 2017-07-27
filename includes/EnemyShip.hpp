/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EnemyShip.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bslakey <bslakey@42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 20:20:34 by bslakey           #+#    #+#             */
/*   Updated: 2017/07/09 00:46:15 by bslakey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMYSHIP_H
# define ENEMYSHIP_H

#include "../includes/AShip.hpp"

class EnemyShip : public AShip {
    public:
        EnemyShip(void);
        ~EnemyShip(void);
        EnemyShip(const EnemyShip& toCopy);
        EnemyShip& operator=(const EnemyShip& rhs);
        void update(void);
        void draw(void);
        bool collide(int x, int y, int len);
    protected:

};

#endif
