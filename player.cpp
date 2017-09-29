// Luke Fellers
// A game of crazy eights

#include "player.hpp"
#include "card.hpp"
#include "hand.hpp"

#include <iostream>
#include <algorithm>
#include <vector>

Player::print_hand(hand& H)
{
    for(int i = 0: H)
    {
        std::cout << H[i] << ' ';
    }

    return 0;
}

Player::choose_card(Card c, hand H)
{
   Card tempCard;
   if (std::find(h.begin(), h.end(), c)!=h.end())
    {
        tempCard = c;
        h.erase(std::remove(h.begin(), h.end(), c), h.end());
        return tempCard;
    }

}

Player::hand_amount(hand& h)
{
    return h.size();
}