//	Hao Phan
//	CECS 325-02
//	Prgrogram 1
//	09/25/2023
//	I certify that this program is my own original work. I did not copy any part of this program from
//	any other source. I further certify that I typed each and every line code in this program.



//#ifdef DECK_H
//#define DECK_H

#include <string>
#include "Card.h"
// #include "Card.cpp"
// #include "Deck.cpp"
#include <vector>
using namespace std;

class Deck
{   private:
        vector<Card> card_values;
    public:
        Deck();
        void newDeck();
        void shuffle();
        void show();
        bool isEmpty();
        Card deal();

};

//#endif
