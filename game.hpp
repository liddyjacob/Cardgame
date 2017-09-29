// (c) 2017 Orion Davis
// All rights reserved

#pragma once

// Include 
// - Deck
// - Player
// - Pile?
#include "deck.hpp"
#include "player.hpp"

#include <stack>
#include <queue>

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
    Deck discard_pilel;
    Deck draw_pile;

    bool players_have_cards();
    void take_turn(Player&);
    
public:
    CrazyEights() = default;
    void setup_game();
    void game_loop();
}
