#include <Arduino.h>
#include <ShiftRegister.h>
#include <AutputRow.h>
#include <Numbers.h>


Numbers::Numbers(AutputRow* autputRow){
    _autputRow = autputRow;
}

void Numbers::setNull(int pos, int farbe){
    byte a=0b01111111;
    byte b=0b01000001;
    _autputRow->setAusgenge(a, b, b, a, 0b0, pos, farbe);
}

void Numbers::setOne(int pos, int farbe){
    byte a=0b00010000;
    byte b=0b00100000;
    byte c=0b01111111;
    _autputRow->setAusgenge(0b0, a, b, c, 0b0, pos ,farbe);
}

void Numbers::setTwo(int pos, int farbe){
    byte a=0b01001111;
    byte b=0b01001001;
    byte c=0b01111001;
    _autputRow->setAusgenge(a, b, b, c, 0b0, pos, farbe);
}

void Numbers::setThree(int pos, int farbe){
    byte a=0b01001001;
    byte b=0b01111111;
    _autputRow->setAusgenge(a, a, a, b, 0b0, pos, farbe);
}

void Numbers::setFour(int pos, int farbe){
    byte a=0b01111000;
    byte b=0b00001000;
    byte c=0b01111111;
    _autputRow->setAusgenge(a, b, b, c, 0b0, pos, farbe);
}

void Numbers::setFive(int pos, int farbe){
    byte a=0b01111001;
    byte b=0b01001001;
    byte c=0b01001111;
    _autputRow->setAusgenge(a, b, b, c, 0b0, pos, farbe);
}

void Numbers::setSIX(int pos, int farbe){
    byte a=0b01111111;
    byte b=0b01001001;
    byte c=0b01001111;
    _autputRow->setAusgenge(a, b, b, c, 0b0, pos, farbe);
}

void Numbers::setSeven(int pos, int farbe){
    byte a=0b01000000;
    byte b=0b01111111;
    _autputRow->setAusgenge(a, a, a, b, 0b0, pos, farbe);
}

void Numbers::setEight(int pos, int farbe){
    byte a=0b01111111;
    byte b=0b01001001;
    _autputRow->setAusgenge(a, b, b, a, 0b0, pos, farbe);
}

void Numbers::setNine(int pos, int farbe){
    byte a=0b01111000;
    byte b=0b01001000;
    byte c=0b01111111;
    _autputRow->setAusgenge(a, b, b, c, 0b0, pos, farbe);
}

int Numbers::setNumberAut(int a, int farbe){
    if(a==0){
        Numbers::setNull(0, farbe);
    }
}

int Numbers::setNumbersAusgabe(int number, int farbe){
    int a=number/100;


}
