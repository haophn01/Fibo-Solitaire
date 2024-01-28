//	Hao Phan
//	CECS 325-02
//	Prgrogram 1
//	09/25/2023
//	I certify that this program is my own original work. I did not copy any part of this program from
//	any other source. I further certify that I typed each and every line code in this program.


#include <iostream>
#include "Card.h"
using namespace std;

Card::Card()
{
    string original = "Joker";
    string type = "";
};

Card::Card(char r, char s)  //original(r), type(s)
{
    original = r;
    type = s;
    int val = original + type;
};

int Card::getValue()
{
    {
        if (original == 'A')
        {
            return 1;
        }
        else if ( original == 'T' || original == 'J' || original == 'Q' || original == 'K' || original =='X')
        {
            return 10;
        }
        else if (original == '2')
        {
            return 2;
        }
        else if (original == '3')
        {
            return 3;
        }
        else if (original == '4')
        {
            return 4;
        }
        else if (original == '5')
        {
            return 5;
        }
        else if (original == '6')
        {
            return 6;
        }
        else if (original == '7')
        {
            return 7;
        }
        else if (original == '8')
        {
            return 8;
        }
        else if (original == '9')
        {
            return 9;
        }
    }
    return 0;
};

void Card::show()
{
    cout <<original<<type<<" ";
};
