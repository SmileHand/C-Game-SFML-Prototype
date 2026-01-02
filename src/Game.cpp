/* --- Game.cpp --- */

/* ------------------------------------------
author: Drago
date: 12/18/2025
------------------------------------------ */

#include "Game.h"

Game::Game()
: mWindow(sf::VideoMode({640,480}), "cazia"),
mPlayer() {
    mPlayer.setRadius(40.f);
    mPlayer.setPosition({100, 100});
    mPlayer.setFillColor(sf::Color::Cyan);
    // Constructor
}

void Game::run(){
    while(mWindow.isOpen()){
        prossEventos();
        update();
        render();
    }
}

void Game::prossEventos(){
    while(const std::optional event = mWindow.pollEvent()){
        if(event->is<sf::Event::Closed>()) mWindow.close();
    }
}

void Game::update(){

}

void Game::render(){
    mWindow.clear();
    mWindow.draw(mPlayer);
    mWindow.display();
}

Game::~Game() {
    // Destructor
}
