//	Hao Phan
//	CECS 325-02
//	Prgrogram 1
//	09/25/2023
//	I certify that this program is my own original work. I did not copy any part of this program from
//	any other source. I further certify that I typed each and every line code in this program.


#include <iostream>
#include <vector>
#include "Deck.h"
#include <bits/stdc++.h>
using namespace std;


bool check(int x) {
    int s = sqrt(x);
    return s * s == x;
}

bool isFibo(int i) {
    return check(5 * i * i + 4) || check(5 * i * i - 4);
}


int main() {
   
    cout <<"Welcome to Fibonacci Solitare!" << endl;
    Card temp;
    Deck game;
    Deck winning;
    

    while (true) {
        cout <<"\n1. Create New Deck" <<endl;
        cout <<"2. Display Deck" <<endl;
        cout <<"3. Shuffle Deck" <<endl;
        cout <<"4. Play Fibo Solitaire" <<endl;
        cout <<"5. Win Fibo Solitare" <<endl;
        cout <<"6. Exit" <<endl;
        int choice;
        cout <<"Enter your choice: ";
        cin >> choice;
   
        
        if (choice == 1){
            game.newDeck();
            cout <<" New Deck has created!" <<endl;
        }
        if (choice == 2){
            game.show();
        }   
        if (choice == 3){
            game.shuffle();
            cout <<" Deck Shuffled!" <<endl;
        }
        if (choice == 4){
            cout <<"Playing Fibonacci Solitaire!!!" << endl;
            int point, cumulate_point, count; //count is meant for checking howm many pile from the deck
            while (game.isEmpty() == 0){
                temp = game.deal(); //store the deal card in to a temp var
                point = temp.getValue(); //store the value into a point var so I can add it up
                cumulate_point += point;
                temp.show(), "\t";
                if (isFibo(cumulate_point) == 1){
                    cout <<"Fibo:"<< cumulate_point<< endl;
                    cumulate_point = 0;
                    count += 1;
                }
            }
            if (isFibo(cumulate_point) == 1){
                cout <<"\n"<< "winner in" << count << "pile(s)!";
            }
            else {
                cout << "\nloser in last pile";
            }
            cumulate_point = 0;
            game.newDeck();
        }
        if (choice == 5){
            bool autorunning = true;
            int point, cumulate_point, count = 0, card_count; //count is meant for checking howm many pile from the deck
            while (autorunning) {
                card_count = 0;
                winning = game;

                while (!game.isEmpty()){ 
                    temp = game.deal(); //store the deal card in to a temp var
                    point = temp.getValue(); //store the value into a point var so I can add it up
                    cumulate_point += point;
                    card_count++;
                    
                    if (isFibo(cumulate_point) && (card_count == 51)){ // if win, 52 cards pulled and it's fibo
                        cumulate_point = 0;

                        while (!winning.isEmpty()){
                            temp = winning.deal(); //store the deal card in to a temp var
                            point = temp.getValue(); //store the value into a point var so I can add it up
                            cumulate_point += point;
                            temp.show();
                            cout << "\t";
                            
                            if (isFibo(cumulate_point) == 1){
                                cout <<"Fibo:"<< cumulate_point << endl;
                                cumulate_point = 0;
                            }
                        }

                        cout <<"Fibo:"<< cumulate_point<< endl;
                        cout << "PLAYED "<< count << " games" << endl;
                        autorunning = false;
                    }
                    if (isFibo(cumulate_point) == 1){
                        cumulate_point = 0;
                        count += 1;
                    }

                }
                cumulate_point = 0;
                game.newDeck();
                game.shuffle();
            }
        }
        if (choice == 6){
            cout << "Good Bye!";
            break;
        }
                
    }
 
}
