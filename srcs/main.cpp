/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bslakey <bslakey@42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 19:33:36 by bslakey           #+#    #+#             */
/*   Updated: 2017/07/09 21:28:05 by bslakey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Game.hpp"
#include "ncurses.h"
#include <iostream>
#include <unistd.h>

int     main(int argc, char *argv[])
{
    std::srand(std::time(NULL));
    if (argc == 2)
    {
        Game* game = new Game;
        game->setPlayerName(argv[1]);
        while(game->beingPlayed())
        {
            if (game->getTicks() % 1000 == 0)
                game->spawnEnemies();
            if (game->getTicks() % 500 == 0)
                game->enemyFire();
            game->takeUserInput();
            game->updateWorld();
            game->renderChanges();
            game->showHUD();
            refresh();
        }
        endwin();
        std::cout << "GAME OVER!\n" << game->getName() 
                  << " your score is " <<  game->getScore()
                  << std::endl;
        
        delete game;
    }
    else
        std::cout << "usage: ./ft_retro [name]" << std::endl;
    return EXIT_SUCCESS;
}
