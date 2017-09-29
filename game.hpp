// (c) 2017 Orion Davis
// All rights reserved

#pragma once

// Include 
// - Deck
// - Player
// - Pile?
#include "deck.hpp"
#include "player.hpp"
#include "pile.hpp"

class CrazyEights {
private:
    // Players
    Player p1;
    Player p2;
    Player p3;
    Player p4;

    // Deck of Cards
    Deck d;

    // Piles (draw/discard)
    Deck draw; // Could be represented by a queue
    Deck discard; // Could be represented by a stack

    bool players_have_cards();
    
public:
    CrazyEights() = default;
    void setup_game();
    void game_loop();
}
