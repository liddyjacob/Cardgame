// (c) 2017 Orion Davis
// All rights reserved

// Guarantee that this files is included exactly once
#pragma once

#include <ostream>

enum Suit {
    Spade,
    Club,
    Diamond,
    Heart
};

enum Rank { // Rank is enumeration (type)
    Ace, // defaults to zero, and called an enumerator
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Jack,
    Queen,
    King
};

// Card is a pair of a rank and suit
//
// Information hiding: prevent access to implementation details of a data type
class Card {
public:
    // Default constructor
    Card() = default;

    // Assignment constructor
    Card(Rank r, Suit s) 
        : rank(r), suit(s) // Member initializer list, must be in order
        {}

    // Copy constructor
    Card(const Card& c)
        : rank(c.rank), suit(c.suit)
        {}

    // Copy assignment operator
    Card& operator=(const Card& c) {
        rank = c.rank;
        suit = c.suit;
        return *this;
    }

    // Accessor functions
    Rank get_rank() const { return rank; }
    Suit get_suit() const { return suit; }

private:
    Rank rank;
    Suit suit;
};

// Equality operators       
bool operator==(Card a, Card b);
bool operator!=(Card a, Card b);

// Comparison operators
bool operator<(Card a, Card b);
bool operator>(Card a, Card b);
bool operator<=(Card a, Card b);
bool operator>=(Card a, Card b);

// Output operators
std::ostream& operator<<(std::ostream& os, Rank r);
std::ostream& operator<<(std::ostream& os, Suit s);
std::ostream& operator<<(std::ostream& os, Card c);


