#include <Arduino.h>
#include <ShiftRegister.h>
#include <AutputRow.h>
#include <Numbers.h>


Numbers::Numbers(AutputRow* autputRow){
    _autputRow = autputRow;
}

int Numbers::setNumberAut(char inputCharNumber, int farbe, int pos){
    int i;
    switch (inputCharNumber){
    case '0':
        _autputRow->setAusgenge(0b01111111, 0b01000001, 0b01000001, 0b01111111, 0b0, pos, farbe);
        i=0;
        break;

    case '1':
        _autputRow->setAusgenge(0b0, 0b00010000, 0b00100000, 0b01111111, 0b0, pos ,farbe);
        i=1;
        break;
    case '2':
        _autputRow->setAusgenge(0b01001111, 0b01001001, 0b01001001, 0b01111001, 0b0, pos, farbe);
        i=2;
        break;
    case '3':
        _autputRow->setAusgenge(0b01001001, 0b01001001, 0b01001001, 0b01111111, 0b0, pos, farbe);
        i=3;
        break;
    case '4':
        _autputRow->setAusgenge(0b01111000, 0b00001000, 0b00001000, 0b01111111, 0b0, pos, farbe);
        i=4;
        break;
    case '5':
        _autputRow->setAusgenge(0b01111001, 0b01001001, 0b01001001, 0b01001111, 0b0, pos, farbe);
        i=5;
        break;
    case '6':
        _autputRow->setAusgenge(0b01111111, 0b01001001, 0b01001001, 0b01001111, 0b0, pos, farbe);
        i=6;
        break;
    case '7':
        _autputRow->setAusgenge(0b01000000, 0b01000000, 0b01000000, 0b01111111, 0b0, pos, farbe);
        i=7;
        break;
    case '8':
        _autputRow->setAusgenge(0b01111111, 0b01001001, 0b01001001, 0b01111111, 0b0, pos, farbe);
        i=8;
        break;
    case '9':
        _autputRow->setAusgenge(0b01111000, 0b01001000, 0b01001000, 0b01111111, 0b0, pos, farbe);
        i=9;
        break;
    case '+':
        _autputRow->setAusgenge(0b0, 0b00001000, 0b00011100, 0b00001000, 0b0, pos, farbe);
        i = -4;
        break;
    case '-':
        _autputRow->setAusgenge(0b0, 0b00001000, 0b00001000, 0b00001000, 0b0, pos, farbe);
        i = -5;
        break;
    case '*':
        _autputRow->setAusgenge(0b0, 0b0, 0b00001000, 0b0, 0b0, pos, farbe);
        i = -6;
        break;
    case '/':
        _autputRow->setAusgenge(0b0, 0b0, 0b00010100, 0b0, 0b0, pos, farbe);
        i = -7;
        break;
    case  '=':
        _autputRow->setAusgenge(0b0, 0b00010100, 0b00010100, 0b00010100, 0b0, pos, farbe);
        i = -3;
        break;
    case '_':
            i=-2;
            break;
    default:
        i=-1;
        _autputRow->setFehler();
        break;
    }
    return i;
}

int Numbers::setNumbersAusgabe(String number, int farbe){
    int lengthofNumber= number.length();
    lengthofNumber=lengthofNumber*5;
    int timer;
    String b="_"+number;
    for(int i=lengthofNumber; i>=0; i++){
        timer=millis();
        while (timer+500>millis()){
          for(int h=0; h <=lengthofNumber; h=h+5){
              char c=b.charAt((lengthofNumber-h)/5);
              Numbers::setNumberAut(c, farbe, i-h);
          }
        }
    }
    return number.toInt();
}
