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

int Numbers::setNumberAut(char a, int farbe, int pos){
    int i;
    switch (a){
    case '0':
            Numbers::setNull(pos, farbe);
            i=0;
        break;

    case '1':
        Numbers::setOne(pos, farbe);
        i=1;
        break;
    case '2':
        Numbers::setTwo(pos, farbe);
        i=2;
        break;
    case '3':
        Numbers::setThree(pos, farbe);
        i=3;
        break;
    case '4':
        Numbers::setFour(pos, farbe);
        i=4;
        break;
    case '5':
        Numbers::setFive(pos, farbe);
        i=5;
        break;
    case '6':
        Numbers::setSix(pos, farbe);
        i=6;
        break;
    case '7':
        Numbers::setSeven(pos, farbe);
        i=7;
        break;
    case '8':
        Numbers::setEight(pos, farbe);
        i=8;
        break;
    case '9':
        Numbers::setNine(pos, farbe);
        i=9;
        break;
    default:
        i=-1;
        _autputRow->setFehler();
        break;
    }
    return i;
}

int Numbers::setNumbersAusgabe(String number, int farbe){
    int l= number.length();
    l=l*5;
    int timer;
    String b="_"+number;
    for(int i=1; i<=l; i++){
        timer=millis();
        while (timer+500>millis()){
          for(int h=0; h <=l; h=h+5){
              char c=b.charAt((l-h)/5);
              Numbers::setNumberAut(c, farbe, i-h);
          }
        }
    }
    return number.toInt();
}
