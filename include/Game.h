/* --- Game.h --- */

/* ------------------------------------------
Author: Drago
Date: 12/18/2025
------------------------------------------ */

#ifndef GAME_H
#define GAME_H
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

class Game {
public:
    Game();
    ~Game();
    void run();

private:
    void prossEventos();
    void update();
    void render();

    sf::RenderWindow mWindow;
    sf::CircleShape mPlayer;

};

#endif // GAME_H
