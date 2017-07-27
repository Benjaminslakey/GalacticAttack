/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AShip.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bslakey <bslakey@42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 00:40:00 by bslakey           #+#    #+#             */
/*   Updated: 2017/07/09 16:15:53 by bslakey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AShip.hpp"

AShip::AShip(void)
{
    return;
}

AShip::~AShip(void)
{
    return;
}

AShip::AShip(const AShip & toCopy)
{
    *this = toCopy;
    return;
}

AShip & AShip::operator= (const AShip & rhs)
{
    _height = rhs._height;
    _width = rhs._width;
    _x = rhs._x;
    _y = rhs._y;
    _speed = rhs._speed;
    _direction = rhs._direction;
    _active = rhs._active;
    return *this;
}
