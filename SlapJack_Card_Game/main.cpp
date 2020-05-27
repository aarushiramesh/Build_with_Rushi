//Program for SlapJack
//Simulation

#include "Card.h"
#include "Player.h"
#include "Deck.h"

#include <string>
#include <vector>
#include <iostream>
#include <ctime>
#include <cstdlib>


int main() {

    std::cout << "Welcome to a game of SlapJack" << std::endl;

    //Make a Deck Instance
    Deck ourdeck;

    //Make two players
    Player p1("Aarushi");
    Player p2("Sasha");

    //Simulating the Game!!!

    //Step 1: Shuffle the deck
    ourdeck.shuffle_the_deck();

    //Step 2: Pass out the cards from deck
    p1.splitDeck(p2, ourdeck);

    //Step 3: Play the game!
    //Stop when one of the players is out of cards, or when one of the players wins all 52
    //cards

    vector<Card> center_pile;

    srand(time(NULL));

    int chance;
    int round = 0;

    while(p1.sizeofPile() != 0 && p2.sizeofPile() != 0 && p1.sizeofPile() != 52 && p2.sizeofPile() != 52) {
        //First player plays first -- p1
        if(round == 0){
            p1.placeCardinCenter(center_pile);
            cout << p1.getName() << " placed a " << center_pile[center_pile.size()-1].convertoString() << endl;
            if(center_pile[center_pile.size()-1].equalsJack()){
                cout << "See a Jack!!" << endl;
                //Simulate the "slap"
                //50% chance
                chance = rand() % 2;
                if(chance == 0){
                    //p1 collects
                    cout << p1.getName() << " Slapped the Jack first!!" << endl;
                    p1.collectCards(center_pile);
                }else{
                    //p2 collects
                    cout << p2.getName() << " Slapped the Jack first!!" << endl;
                    p2.collectCards(center_pile);
                }
            }
        }else{
            p2.placeCardinCenter(center_pile);
            cout << p2.getName() << " placed a " << center_pile[center_pile.size()-1].convertoString() << endl;
            if(center_pile[center_pile.size()-1].equalsJack()){
                cout << "See a Jack!!" << endl;
                //Simulate the "slap"
                //50% chance
                chance = rand() % 2;
                if(chance == 0){
                    //p2 collects
                    cout << p2.getName() << " Slapped the Jack first!!" << endl;
                    p2.collectCards(center_pile);
                }else{
                    //p1 collects
                    cout << p1.getName() << " Slapped the Jack first!!" << endl;
                    p1.collectCards(center_pile);
                }
            }
        }
        //Switching turns
        round = (round == 0) ? 1 : 0;
    }

    //Checks to see which player ran out of cards first!!!
    if(p1.sizeofPile() == 0){
        //p2 wins!
        cout << p2.getName() << " wins!!" << endl;
    }else{
        //p1 wins!
        cout << p1.getName() << " wins!!" << endl;
    }

    return 0;
}
