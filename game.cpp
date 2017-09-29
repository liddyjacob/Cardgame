// (c) 2017 Orion Davis
// All rights reserved

#include "game.hpp"

#include <iterator>

void CrazyEights::setup_game() {
    // Shuffle deck
    

    // Deal cards to the players
    // 1 by 1, deal a card to each player until they all have 8
    // This means the first 32 cards of the shuffled deck are distributed
    

    // Copy the last 20 cards into the draw pile


    // Flip over the top card and start building discard
}

void CrazyEights::game_loop() {
    while (players_have_cards()) {
        // Iterate through everyone's turns with a for loop?
        // Check what the top of the discard is
        Card top_discard = discard.top; 

        // See if the player's hand contains any cards that can be played based on the top of the discard
        for (int i = 0; i < hand.size(); ++i) {
            if (hand[i].get_rank() == top_discard.get_rank() || hand[i].get_suit() == top_discard.get_suit()) {
                // Play the card
            }
        }
    
        // If not, make them draw cards until they have a card to play and then move onto the next player's turn
        while (true) {
            // Draw a card, if it can't be played keep going     
            Card drawn = draw.draw_top();
            if (drawn.get_rank() == top_discard.get_rank() || drawn.get_suit() == top_discard.get_suit()) {

            }
        } 

        // Move onto the next player's turn, and if there is an eight played skip them and move on

    }

    // Determine who is out of cards and declare them the winner
}

bool CrazyEights::players_have_cards() {
    if (p1.empty_hand() || p2. empty_hand() || p3.empty_hand() || p4.empty_hand()) {
        return false;
    }
    else {
        return true;
    }
}
