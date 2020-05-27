//
// Created by Aarushi Ramesh on 5/23/20.
//

#ifndef SLAPJACK_DECK_H
#define SLAPJACK_DECK_H

#include "Card.h"

using namespace std;

class Deck {
    //common across all instances!!!
    static const int size_of_deck = 52;

public:
    //Constructor
    Deck();

    //Shuffle our Deck
    void shuffle_the_deck();

    //Checks to see if the deck is empty -- if index is -1
    bool is_empty();

    //Returns Deck of the Deck class instance
    Card* getDeck(){
        return deck;
    }

    //Declares deck as empty, once done passing the cards
    void emptyDeck(){
        index = -1;
    }

private:
    //our deck of 52 cards
    Card deck[size_of_deck];
    int index;
};


#endif //SLAPJACK_DECK_H
