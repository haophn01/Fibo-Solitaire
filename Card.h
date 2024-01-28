//	Hao Phan
//	CECS 325-02
//	Prgrogram 1
//	09/25/2023
//	I certify that this program is my own original work. I did not copy any part of this program from
//	any other source. I further certify that I typed each and every line code in this program.



//#ifdef CARD_H
//#define CARD_H
#include <string>
class Card
{
    private:
        char original;
        char type;

    public:
        Card();
        Card(char r, char s);
        int getValue();
        void show();

};

//#endif