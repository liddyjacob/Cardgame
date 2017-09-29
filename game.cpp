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
        bool card_not_played = true;
        Card top_discard = discard.top; 

        // See if the player's hand contains any cards that can be played based on the top of the discard
        for (int i = 0; i < hand.size(); ++i) {
            if (hand[i].get_rank() == top_discard.get_rank() || hand[i].get_suit() == top_discard.get_suit()) {
                // Play the card
                discard.add_card(p1.play(hand[i]));
                card_not_played = false;
            }
        }
    
        // If not, make them draw cards until they have a card to play and then move onto the next player's turn
        while (card_not_played) {
            // Draw a card, if it can't be played keep going     
            Card drawn = draw.draw_top();
            if (drawn.get_rank() == top_discard.get_rank() || drawn.get_suit() == top_discard.get_suit()) {
                // Play the card, doesn't have to be added to the player's hand
                card_not_played = false;
            }
            else {
                // Add card to the hand and repeat the loop
                px.add_card(drawn) // Function takes the passed card and pushes it into the Hand data structure
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

void CrazyEights::take_turn(Player& p) {
    Card current_top_discard = discard_pile.front();
    
    // Iterate through the player's hand to determine if they have a card matching either the suit or the rank
    for (Card c : p.hand) {
        if (c.get_rank() == current_top_discard.get_rank() || c.get_suit() == current_top_discard.get_suit()) {
            // Play the first card that matches the criteria
            auto it = discard_pile.begin();
            discard_pile.insert(it, p.play_card(c));
            // Now the player's turn needs to end
            return;
        }
    }

    // If we get through this loop without the turn ending we need to draw cards until we get something we can play
    Card d = draw_pile.draw_top();

    while (true) {
        if (d.get_rank() == current_top_discard.get_rank() || d.get_suit() == current_top_discard.get_suit()) {
            // Is this the best way to be constantly adding cards to the front of the vector?
            auto it = discard_pile.begin();
            discard_pile.insert(it, d);
            break;
        }
        else {
            p.add_card(d);
        }
    }
    return;
}
