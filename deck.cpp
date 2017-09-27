/*
Jacob Liddyd
deck.cpp
*/

#include "deck.hpp"

#include <iostream>
#include <random>
#include <algorithm>


std::random_device rng; //Psudo random generator seed
std::minstd_rand prng;


Deck
make_standard_deck()
{
  Deck d;
  for (int s = Spade; s <= Heart; s++){
    for (int r = Ace; r <= King; r++){

      Card c(static_cast<Rank>(r),static_cast<Suit>(s)) ; 
      d.push_back(c);

      }
  }

  return d;
}





Deck
combine(const Deck& d1, const Deck& d2)
{
  Deck d;
  d.insert(d.end(), d1.begin(), d1.end());
  d.insert(d.end(), d2.begin(), d2.end());

  return d;
}

void 
shuffle(Deck& deck)
{
  prng.seed(rng());

  std::shuffle(deck.begin(), deck.end(), prng);
}



void 
print(const Deck &deck) 
{
  int i = 1;
  for (Card c : deck) {
    std::cout << c << ' ';
    if (i % 13 == 0) {
      std::cout << '\n';
      i = 0;
    }
    ++i;
  }
  std::cout << '\n';
}

