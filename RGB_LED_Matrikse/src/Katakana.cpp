#include <Arduino.h>
#include <Katakana.h>

Katakana::Katakana(AutputRow* autputRow){
    _autputRow = autputRow;
}
/*  1   2   3   4   5
8
7               X
6           X
5           X   
4       x   X    
3   x       X    
2           X
1           X   
    */
void Katakana::setA(int pos, int farbe){
    byte a=0b01000001;
    byte b=0b01111110;
    byte c=0b01000000;
    byte d=0b01100000;
    _autputRow->setAusgenge(a, b, c, d, 0b0, pos, farbe);

}

void Katakana::setI(int pos, int farbe){

}
