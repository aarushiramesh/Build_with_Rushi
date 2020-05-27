//
// Created by Aarushi Ramesh on 5/23/20.
//

#include "Deck.h"
#include <ctime>
#include <cstdlib>

Deck::Deck() {
    //Ordered, Sorted Deck --> Aces, 2s, 3s....etc.
    int val = 0;
    for(int i = 0; i < size_of_deck; i++){
        if(i % 4 == 0){
            val++;   //Goes to the next number
            deck[i].setRank(val);
            deck[i].setSuit(Card::Spades);
        }else if(i % 4 == 1){
            deck[i].setRank(val);
            deck[i].setSuit(Card::Clubs);
        }else if(i % 4 == 2){
            deck[i].setRank(val);
            deck[i].setSuit(Card::Diamonds);
        }else{
            deck[i].setRank(val);
            deck[i].setSuit(Card::Hearts);
        }
    }
    //marks where we are in the deck
    index = size_of_deck-1;
}

void Deck::shuffle_the_deck() {
    //Randomly Shuffle the Deck
    //"Randomness"
    int size = size_of_deck;
    unsigned int current = (unsigned) time(0);
    srand(current);

    int ran1, ran2;
    for(int i = 0; i < 15; i++){
        ran1 = rand() % size;
        ran2 = rand() % size;
        //swap these two elements at ran1, ran2 index
        Card temp = deck[ran1];
        deck[ran1] = deck[ran2];
        deck[ran2] = temp;
    }

}

bool Deck::is_empty() {
    if(index < 0) return true;
    return false;
}