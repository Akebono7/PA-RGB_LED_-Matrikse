#include <Arduino.h>
#include <Akebono.h>
#include <AutputRow.h>

Akebono::Akebono(AutputRow* autputRow){
    _autputRow = autputRow;
}

void Akebono::charakter(char inputChar, int farbe, int pos){  //alpafrebeteicla charakter.
     switch(inputChar){
        case 'a':
            _autputRow->setAusgenge(0b01111111, 0b01001000, 0b01001000, 0b01111111, 0b0, pos, farbe);
            break;
        case 'b':
            _autputRow->setAusgenge(0b01111111, 0b01001001, 0b01111111, 0b00110110, 0b0, pos, farbe);
            break;
        case 'c':
            _autputRow->setAusgenge(0b01111111, 0b01000001, 0b01000001, 0b01000001, 0b0, pos, farbe); 
            break;
        case 'd':
            _autputRow->setAusgenge(0b01111111, 0b01000001, 0b01100011, 0b00111100, 0b0, pos, farbe);
            break;
        case 'e':
            _autputRow->setAusgenge(0b01111111, 0b01001001, 0b01001001, 0b01001001, 0b0, pos, farbe);
            break;
        case 'f':
            _autputRow->setAusgenge(0b01111111, 0b01001000, 0b01001000, 0b01001000, 0b0, pos, farbe);
            break;
        case 'g':
            _autputRow->setAusgenge(0b01111111, 0b01000001, 0b01001001, 0b01101111, 0b0, pos, farbe);
            break;
        case 'h':
            _autputRow->setAusgenge(0b01111111, 0b00001000, 0b00001000, 0b01111111, 0b0, pos, farbe);
            break;
        case 'i':
            _autputRow->setAusgenge(0b01000001, 0b01111111, 0b01000001, 0b0, 0b0, pos, farbe);
            break;
        case 'j':
            _autputRow->setAusgenge(0b00000011, 0b01100001, 0b01000001, 0b01111111, 0b0, pos, farbe);
            break;
        case 'k':
            _autputRow->setAusgenge(0b01111111, 0b00001100, 0b00010010, 0b00100001, 0b0, pos, farbe);
            break;
        case 'l':
            _autputRow->setAusgenge(0b01111111, 0b00000001, 0b00000001, 0b00000001, 0b0, pos, farbe);
            break;
        case 'm':
            _autputRow->setAusgenge(0b01111111, 0b00110000, 0b00001000, 0b00110000, 0b01111111, pos, farbe);
            break;
        case 'n':
            _autputRow->setAusgenge(0b01111111, 0b00110000, 0b00001100, 0b01111111, 0b0, pos, farbe);
            break;
        case 'o':
            _autputRow->setAusgenge(0b00111110, 0b01100011, 0b01100011, 0b00111110, 0b0, pos, farbe);
            break;
        case 'p':
            _autputRow->setAusgenge(0b01111111, 0b01001000, 0b01001000, 0b01111000, 0b0, pos, farbe);
            break;
        case 'q':
             _autputRow->setAusgenge(0b00111110, 0b01100010, 0b01100111, 0b00111110, 0b0, pos, farbe);
            break;
        case 'r':
            _autputRow->setAusgenge(0b01111111, 0b01001100, 0b01001010, 0b01111001, 0b0, pos, farbe);
            break;
        case 's':
            _autputRow->setAusgenge(0b01111001, 0b01001001,0b01001001 , 0b01001111, 0b0, pos, farbe);
            break;
        case 't':
            _autputRow->setAusgenge(0b01000000, 0b01111111, 0b01000000, 0b0, 0b0, pos, farbe);
            break;
        case 'u':
            _autputRow->setAusgenge(0b01111111, 0b00000001, 0b00000001, 0b01111111, 0b0, pos, farbe);
            break;
        case 'v':
            _autputRow->setAusgenge(0b01111100, 0b00000111, 0b00000111, 0b01111100, 0b0, pos, farbe); 
            break;
        case 'w':
            _autputRow->setAusgenge(0b01111111, 0b00000110, 0b00011100, 0b00000110, 0b01111111, pos, farbe);
            break;
        case 'x':
            _autputRow->setAusgenge(0b01100011, 0b00011100, 0b00011100, 0b01100011, 0b0, pos, farbe);
            break;
        case 'y':
            _autputRow->setAusgenge(0b01110000, 0b00001111, 0b00001111, 0b01110000, 0b0, pos, farbe);
            break;
        case 'z':
            _autputRow->setAusgenge(0b01000011, 0b01000111, 0b01011101, 0b01111001, 0b0, pos, farbe);
            break;
        case '_':
            break;
        case ' ':
            _autputRow->setAusgenge(0, 0, 0, 0, 0, pos, farbe);
            break;
        case '.':
            _autputRow->setAusgenge(0, 0b00000011,0b00000011, 0, 0, pos, farbe);
            break;
        default:
            _autputRow->setFehler();
            break;
    }
}

void Akebono::setString(String inputString, int farbe){    // the out put funcktion of the Class to print a string from left to reith on a 8X8 RGB-LED matriks.
    int stringLength=inputString.length();                // get the legth of the String and stors it in the l varibal.
    stringLength=stringLength*6;                            // multiplis the legthe bay 6 to make the position work.
    inputString.toLowerCase();                  // converts the leter in the sting all to lower case to provnet not matches.
    int timer;                        // Creats a time Vraribal vor the autput. to worke.
    String bugfixString="_"+inputString;                   // Bug fix of unont typ witch lade to the first rowe of the first carkter in the String not to show this provents the.
    for(int i=stringLength; i>=0; i++){            //for lopp mit bet canged. set the up cunting for the psotions so the the leter are all presented.
        timer=millis();               // set timer veriball to curent time in millis.
        while (timer+500>millis()){     // loops while timer time +pluse 500 ms is greter or equle to time in millis.
          for(int h=0; h <=stringLength; h=h+6){           
              char posChar=bugfixString.charAt((stringLength-h)/6);
              Akebono::charakter(posChar, farbe, i-h);
          }
        }
        
    }
}
