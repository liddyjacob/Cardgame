// (c) 2017 Orion Davis
// All rights reserved

#pragma once

// Include 
// - Deck
// - Player
// - Pile?

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
    Pile draw;
    Pile discard;
    
public:
    CrazyEights() = default;
    void setup_game();
    void game_loop();
}
