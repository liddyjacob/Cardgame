# Cardgame
This is a class project for Object Oriented Programming.

We are going to implement Crazy Eights, in C++

The basic rules: see BASIC PLAY on Wikipedia:
https://en.wikipedia.org/wiki/Crazy_Eights

### Card
* Eight is a "special card" which lets the player who played that card change the current suit
* We care about rank and suit comparison in being the same for a valid play

### Deck
* Same as the deck from war
    * Shuffle
    * Draw a card from top

### Hand 
*Become a member of the player class*
* Player needs to view cards currently in hand (print)
* Select a card to play

### Game
* Deal cards to n number of players
* Validate the card being played
* Trigger reshuffle of discard to build back up draw pile
* Check when someone has played their last card

### Pile
* Use for both the draw from and discard
* Remove card from pile
* Add a card to the pile
