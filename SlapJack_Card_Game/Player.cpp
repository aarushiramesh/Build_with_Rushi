//
// Created by Aarushi Ramesh on 5/23/20.
//

#include "Player.h"
#include "Card.h"
#include "Deck.h"

#include <utility>
#include <vector>
#include <string>

Player::Player() {
    name = "";
}

Player::Player(string newname) {
    name = newname;
}

void Player::splitDeck(Player &other, Deck &thisdeck) {
    //Splitting the deck into two piles
    //Checks to see if Deck is not empty,
    if(!thisdeck.is_empty()){
        //Incrementing by 2 every time, starts at 0 --> 2 --> 4...
        for(int i = 0; i < 52; i+=2){
            this->pile.push_back(thisdeck.getDeck()[i]);
            other.pile.push_back(thisdeck.getDeck()[i+1]);
        }
    }
    //The Deck is now "empty"
    //Set index to -1
    thisdeck.emptyDeck();
}

void Player::placeCardinCenter(vector<Card> &centerpile) {
    //Placing card from the top of player's pile to center pile
    //pushing the last element of pile to center
    centerpile.push_back(pile[pile.size()-1]);
    pile.pop_back();
}

void Player::collectCards(vector<Card> &centerpile) {
    //If player slaps Jack first, collects all cards from the centerpile
    pile.insert(pile.end(), centerpile.begin(), centerpile.end());
    centerpile.clear();
}