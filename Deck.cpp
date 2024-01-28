//	Hao Phan
//	CECS 325-02
//	Prgrogram 1
//	09/25/2023
//	I certify that this program is my own original work. I did not copy any part of this program from
//	any other source. I further certify that I typed each and every line code in this program.



#include <iostream>
#include <cstdlib>
#include "Deck.h"
using namespace std;

// constructor which creates a deck of 52 cards. Ace of Spades on top, 
// followed by the rest of the spades in order, followed by Spades, Hearts, Diamonds and Clubs.
Deck::Deck()
{
    
    char original[] ={'A', '2', '3', '4', '5', '6', '7', '8', '9', 'X', 'J', 'Q', 'K'};
    char type[] ={'S', 'H', 'D', 'C'};

    for (char first: original)
    {
        for (char second: type)
        {
           card_values.push_back(Card(first,second)); //right here
        }
    }

};

// reset the deck so it looks like a new deck.
void Deck:: newDeck()
{
    // for (Card card: card_values)
    // {
    //     delete[] card;
    // };
    card_values.clear();

    char original[] ={'A', '2', '3', '4', '5', '6', '7', '8', '9', 'X', 'J', 'Q', 'K'};
    char type[] ={'S', 'H', 'D', 'C'};

    for (char first: original)
    {
        for (char second: type)
        {
           card_values.push_back(Card(first,second)); //right here
        }
    }
};
// {
//     delete[] Deck;
//     Deck();
// }

// deal a card from the top of the deck.
Card Deck:: deal()
{
    if (isEmpty()){
        return Card();
    }
    else
    {
        // cout << card_values.size()<< endl;
        Card first = card_values.back(); // why do i 
        card_values.pop_back();
        //cout << card_values.size(); // return card
        return first;
    };
};

void Deck:: shuffle()
{
    for (int gency = 0; gency < 52; gency++){
        //int min = 13;
        //int max = 25;
        int first = rand() % 52;
        int second = rand() % 52;
        //int first = rand() % (max - min + 1)+min;
        //int second = rand() % (max - min + 1)+min;
        Card temp = card_values[first];
        card_values[first] = card_values[second];
        card_values[second] = temp;
    }
};

bool Deck:: isEmpty()
{
    return card_values.empty();
};

void Deck:: show()
{
    // cout << card_values[0].getValue();
    for (int i = 0; i < 52; i++){
      card_values[i].show();
      cout << "\t";
      if ((i + 1) % 13 == 0 && i != 0) {
          std::cout<<"\n";
        //   cout <<i;
      }
    }
};





