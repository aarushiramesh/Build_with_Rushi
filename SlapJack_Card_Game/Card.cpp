//
// Created by Aarushi Ramesh on 5/22/20.
//

#include "Card.h"
#include <string>

using namespace std;

Card::Card() {
    //Default - Ace of Spades
    suit = Spades;
    rank = 1;
}

Card::Card(int rank, Suit s) {
    //Assigning the instance to the particular rank and suit
    this->rank = rank;
    this->suit = s;
}

bool Card::equalsJack() {
    //Checking to see if the rank equals a Jack - number 11
    if(rank == 11){
        return true;
    }
    return false;
}

string Card::convertoString() {
    //Converting a Card to a string
    string s;
    //For Ace = "A", Jack, Queen, King
    if(rank == 1) s = "A";
    else if(rank == 11) s = "J";
    else if(rank == 12) s = "Q";
    else if(rank == 13) s = "K";
    else s = to_string(rank);

    if(suit == Spades) s.append("S");
    else if(suit == Diamonds) s.append("D");
    else if(suit == Hearts) s.append("H");
    else s.append("C");

    return s;
}