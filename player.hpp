// (c) 2017 Luke Fellers
// All rights reserved
// A game of crazy eights

#pragma once

#include "hand.hpp"
#include "card.cpp"

#include <vector>

class Player
{
private:
    hand playerHand;
public:
    void print_hand(hand& H);
    card choose_card(Card c, hand H);
    int hand_amount(hand& h); 
};