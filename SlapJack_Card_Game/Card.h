//
// Created by Aarushi Ramesh on 5/22/20.
//

#ifndef SLAPJACK_CARD_H
#define SLAPJACK_CARD_H

#include <string>
using namespace std;

class Card {
public:
    //Suit for the Card
    enum Suit{Hearts, Clubs, Spades, Diamonds};

    //Default Constructor
    Card();

    //Constructor
    Card(int rank, Suit s);

    //Converting Card rank, suit to a string - Jack of Spades == JS
    string convertoString();

    //To see if the given card equals Jack
    bool equalsJack();

    //Get and Set Functions
    void setRank(int newrank){
        this->rank = newrank;
    }
    void setSuit(Suit newsuit){
        this->suit = newsuit;
    }
    int getRank(){
        return rank;
    }
    Suit getSuit(){
        return suit;
    }

private:
    int rank;
    Suit suit;

};


#endif //SLAPJACK_CARD_H
