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
