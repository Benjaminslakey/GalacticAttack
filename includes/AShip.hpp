/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AShip.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bslakey <bslakey@42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 20:06:32 by bslakey           #+#    #+#             */
/*   Updated: 2017/07/09 15:56:38 by bslakey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASHIP_H
# define ASHIP_H

#include "AGameEntity.hpp"

class AShip : public AGameEntity {
    public:
        AShip(void);
        virtual ~AShip(void) = 0;
        AShip(const AShip& toCopy);
        AShip& operator=(const AShip& rhs);

    protected:
};

#endif
