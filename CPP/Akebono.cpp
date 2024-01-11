#include <Arduino.h>
#include <Akebono.h>
#include <AutputRow.h>

Akebono::Akebono(AutputRow* autputRow){
    _autputRow = autputRow;
}

void Akebono::setA(int pos,int farbe){
    byte a=0b01111111;
    byte b=0b01001000;
    _autputRow->setAusgenge(a, b, b, a, 0b0, pos, farbe);
}

void Akebono::setB(int pos, int farbe){
    byte a=0b01111111;
    byte b=0b01001001;
    byte c=0b00110110;
    _autputRow->setAusgenge(a, b, a, c, 0b0, pos, farbe);
}

void Akebono::setC(int pos, int farbe){
    byte a=0b01111111;
    byte b=0b01000001;
    _autputRow->setAusgenge(a, b, b, b, 0b0, pos, farbe);
}

void Akebono::setD(int pos, int farbe){
    byte a=0b01111111;
    byte b=0b01000001;
    byte c=0b01100011;
    byte d=0b00111100;
    _autputRow->setAusgenge(a, b, c, d, 0b0, pos, farbe); 
}

void Akebono::setE(int pos, int farbe){
    byte a=0b01111111;
    byte b=0b01001001;
    _autputRow->setAusgenge(a, b, b, b, 0b0, pos, farbe);
}

void Akebono::setF(int pos, int farbe){
    byte a=0b01111111;
    byte b=0b01001000;
    _autputRow->setAusgenge(a, b, b, b, 0b0, pos, farbe);
}

void Akebono::setG(int pos, int farbe){
    byte a=0b01111111;
    byte b=0b01000001;
    byte c=0b01001001;
    byte d=0b01101111;
    _autputRow->setAusgenge(a, b, c, d, 0b0, pos, farbe);
}

void Akebono::setH(int pos, int farbe){
    byte a=0b01111111;
    byte b=0b00001000;
    _autputRow->setAusgenge(a, b, b, a, 0b0, pos, farbe);
}

void Akebono::setI(int pos, int farbe){
    byte a=0b01000001;
    byte b=0b01111111;
    _autputRow->setAusgenge(a, b, a, 0b0, 0b0, pos, farbe);
}

void Akebono::setJ(int pos, int farbe){
    byte a=0b00000011;
    byte b=0b01100001;
    byte c=0b01000001;
    byte d=0b01111111;
    _autputRow->setAusgenge(a, b, c, d, 0b0, pos, farbe);
}

void Akebono::setK(int pos, int farbe){
    byte a=0b01111111;
    byte b=0b00001100;
    byte c=0b00010010;
    byte d=0b00100001;
    _autputRow->setAusgenge(a, b, c, d, 0b0, pos, farbe);
}

void Akebono::setL(int pos, int farbe){
    byte a=0b01111111;
    byte b=0b00000001;
    _autputRow->setAusgenge(a, b, b, b, 0b0, pos, farbe);
}

void Akebono::setM(int pos, int farbe){
    byte a=0b01111111;
    byte b=0b00110000;
    byte c=0b00001000;
    _autputRow->setAusgenge(a, b, c, b, a, pos, farbe);
}

void Akebono::setN(int pos, int farbe){
    byte a=0b01111111;
    byte b=0b00110000;
    byte c=0b00001100;
    _autputRow->setAusgenge(a, b, c, a, 0b0, pos, farbe);
}

void Akebono::setO(int pos, int farbe){
    byte a=0b00111110;
    byte b=0b01100011;
    _autputRow->setAusgenge(a, b, b, a, 0b0, pos, farbe);
}

void Akebono::setP(int pos, int farbe){
    byte a=0b01111111;
    byte b=0b01001000;
    byte c=0b01111000;
    _autputRow->setAusgenge(a, b, b, c, 0b0, pos, farbe);
}

void Akebono::setQ(int pos, int farbe){
    byte a=0b00111110;
    byte b=0b01100010;
    byte c=0b01100111;
    _autputRow->setAusgenge(a, b, c, a, 0b0, pos, farbe);
}

void Akebono::setR(int pos, int farbe){
    byte a=0b01111111;
    byte b=0b01001100;
    byte c=0b01001010;
    byte d=0b01111001;
    _autputRow->setAusgenge(a, b, c, d, 0b0, pos, farbe);
}

void Akebono::setS(int pos, int farbe){
    byte a=0b01111001;
    byte b=0b01001001;
    byte c=0b01001111;
    _autputRow->setAusgenge(a, b, b, c, 0b0, pos, farbe);  
}

void Akebono::setT(int pos, int farbe){
    byte a=0b01111111;
    byte b=0b01000000;
    _autputRow->setAusgenge(b, a, b, 0b0, 0b0, pos, farbe);    
}

void Akebono::setU(int pos, int farbe){
    byte a=0b01111111;
    byte b=0b00000001;
    _autputRow->setAusgenge(a, b, b, a, 0b0, pos, farbe);
}

void Akebono::setV(int pos, int farbe){
    byte a=0b01111100;
    byte b=0b00000111;
    _autputRow->setAusgenge(a, b, b, a, 0b0, pos, farbe);    
}

void Akebono::setW(int pos, int farbe){
    byte a=0b01111111;
    byte b=0b00000110;
    byte c=0b00011100;
    _autputRow->setAusgenge(a, b, c, b, a, pos, farbe);
}

void Akebono::setX(int pos, int farbe){
    byte a=0b01100011;
    byte b=0b00011100;
    _autputRow->setAusgenge(a, b, b, a, 0b0, pos, farbe);    
}

void Akebono::setY(int pos, int farbe){
    byte a=0b01110000;
    byte b=0b00001111;
    _autputRow->setAusgenge(a, b, b, a, 0b0, pos, farbe);    
}

void Akebono::setZ(int pos, int farbe){
    byte a=0b01000011;
    byte b=0b01000111;
    byte c=0b01011101;
    byte d=0b01111001;
    _autputRow->setAusgenge(a, b, c, d, 0b0, pos, farbe);    
}

void Akebono::setPoint(int pos, int farbe){
    byte a=0b00000011;
    _autputRow->setAusgenge(0, a, a, 0, 0, pos, farbe);
}

void Akebono::setSpace(int pos, int farbe){
    _autputRow->setAusgenge(0, 0, 0, 0, 0, pos, farbe);
}

void Akebono::charakter(char a, int farbe, int pos){
     switch(a){
        case 'a':
            Akebono::setA(pos, farbe);
            break;
        case 'b':
            Akebono::setB(pos, farbe);
            break;
        case 'c':
            Akebono::setC(pos, farbe);
            break;
        case 'd':
            Akebono::setD(pos, farbe);
            break;
        case 'e':
            Akebono::setE(pos, farbe);
            break;
        case 'f':
            Akebono::setF(pos, farbe);
            break;
        case 'g':
            Akebono::setG(pos, farbe);
            break;
        case 'h':
            Akebono::setH(pos, farbe);
            break;
        case 'i':
            Akebono::setI(pos, farbe);
            break;
        case 'j':
            Akebono::setJ(pos, farbe);
            break;
        case 'k':
            Akebono::setK(pos, farbe);
            break;
        case 'l':
            Akebono::setL(pos, farbe);
            break;
        case 'm':
            Akebono::setM(pos, farbe);
            break;
        case 'n':
            Akebono::setN(pos, farbe);
            break;
        case 'o':
            Akebono::setO(pos, farbe);
            break;
        case 'p':
            Akebono::setP(pos, farbe);
            break;
        case 'q':
            Akebono::setQ(pos, farbe);
            break;
        case 'r':
            Akebono::setR(pos, farbe);
            break;
        case 's':
            Akebono::setS(pos, farbe);
            break;
        case 't':
            Akebono::setT(pos, farbe);
            break;
        case 'u':
            Akebono::setU(pos, farbe);
            break;
        case 'v':
            Akebono::setV(pos, farbe);
            break;
        case 'w':
            Akebono::setW(pos, farbe);
            break;
        case 'x':
            Akebono::setX(pos, farbe);
            break;
        case 'y':
            Akebono::setY(pos, farbe);
            break;
        case 'z':
            Akebono::setZ(pos, farbe);
            break;
        case '_':
            break;
        case ' ':
            Akebono::setSpace(pos, farbe);
            break;
        case '.':
            Akebono::setPoint(pos, farbe);
            break;
        default:
            _autputRow->setFehler();
            break;
    }
}

void Akebono::setString(String a, int farbe){    // the out put funcktion of the Class to print a string from left to reith on a 8X8 RGB-LED matriks.
    int l =a.length();                // get the legth of the String and stors it in the l varibal.
    l=l*6;                            // multiplis the legthe bay 6 to make the position work.
    a.toLowerCase();                  // converts the leter in the sting all to lower case to provnet not matches.
    int timer;                        // Creats a time Vraribal vor the autput. to worke.
    String b="_"+a;                   // Bug fix of unont typ witch lade to the first rowe of the first carkter in the String not to show this provents the.
    for(int i=l; i>=0; i++){            //for lopp mit bet canged. set the up cunting for the psotions so the the leter are all presented.
        timer=millis();               // set timer veriball to curent time in millis.
        while (timer+500>millis()){     // loops while timer time +pluse 500 ms is greter or equle to time in millis.
          for(int h=0; h <=l; h=h+6){           
              char c=b.charAt((l-h)/6);
              Akebono::charakter(c, farbe, i-h);
          }
        }
        
    }
}
