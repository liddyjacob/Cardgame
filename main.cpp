//main.cpp

#include <iostream>

#include "deck.hpp"

int main(){
  Deck d = make_standard_deck();
 
  print(d);

  return 0;
}
