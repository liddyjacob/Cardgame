/*
Jacob Liddy
*/

#pragma once

#include "card.hpp"

#include <vector>
;

using Deck = std::vector<Card>;

//Build a french style 52 card deck
Deck make_standard_deck();

Deck combine(const Deck& d1, const Deck& d2);

void shuffle(Deck& d);

void print(const Deck& d);


