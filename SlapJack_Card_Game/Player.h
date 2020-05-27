//
// Created by Aarushi Ramesh on 5/23/20.
//

#ifndef SLAPJACK_PLAYER_H
#define SLAPJACK_PLAYER_H

#include "Card.h"
#include "Deck.h"
#include <vector>

using namespace std;

class Player {
public:
    //Default
    Player();

    Player(string newname);

    //Placing the card in the center pile (from your pile)
    void placeCardinCenter(vector<Card> &centerpile);

    //Splitting the deck into two piles -- random
    void splitDeck(Player &other, Deck &thisdeck);

    void collectCards(vector<Card> &centerpile);

    int sizeofPile(){
        return pile.size();
    }

    string getName(){
        return name;
    }

private:
    vector<Card> pile;    //Player's pile
    string name;          //Player's name
};


#endif //SLAPJACK_PLAYER_H
