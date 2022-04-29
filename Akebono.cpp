#include <Arduino.h>
#include <Akebono.h>
#include <AutputRow.h>

Akebono::Akebono(AutputRow* autputRow){
    _autputRow = autputRow;
}

void Akebono::setAusgenge(byte a, byte b, byte c, byte d, byte e, int pos ,int farbe){
    if(pos==1){
        _autputRow->setPosShiftRegisterRGB(e, 0b0, 0b0, 0b0, 0b0, 0b0, 0b0, 0b0, farbe);
    }else if(pos==2){
        _autputRow->setPosShiftRegisterRGB(d, e,0b0, 0b0, 0b0, 0b0, 0b0, 0b0, farbe);
    }else if(pos==3){
        _autputRow->setPosShiftRegisterRGB(c, d, e, 0b0, 0b0, 0b0, 0b0, 0b0, farbe);
    }else if(pos==4){
        _autputRow->setPosShiftRegisterRGB(b, c, d, e, 0b0, 0b0, 0b0, 0b0, farbe);
    }else if(pos==5){
        _autputRow->setPosShiftRegisterRGB(a, b, c, d, e, 0b0, 0b0, 0b0, farbe);
    }else if (pos==6){
        _autputRow->setPosShiftRegisterRGB(0b0, a, b, c, d, e, 0b0, 0b0, farbe);
    }else if(pos==7){
        _autputRow->setPosShiftRegisterRGB(0b0, 0b0, a, b, c, d, e, 0b0, farbe);
    }else if(pos==8){
        _autputRow->setPosShiftRegisterRGB(0b0, 0b0, 0b0, a, b, c, d, e, farbe);
    }else if(pos==9){
        _autputRow->setPosShiftRegisterRGB(0b0, 0b0, 0b0, 0b0, a, b, c, d, farbe);
    }else if(pos==10){
        _autputRow->setPosShiftRegisterRGB(0b0, 0b0, 0b0, 0b0, 0b0, a, b, c, farbe);
    }else if(pos==11){
        _autputRow->setPosShiftRegisterRGB(0b0, 0b0, 0b0, 0b0, 0b0, 0b0, a, b, farbe);   
    }else if(pos==12){
        _autputRow->setPosShiftRegisterRGB(0b0, 0b0, 0b0, 0b0, 0b0, 0b0, 0b0, a, farbe);
    }
}


void Akebono::setA(int pos,int farbe){
    byte a=0b01111111;
    byte b=0b01001000;
    Akebono::setAusgenge(a, b, b, a, 0b0, pos, farbe);
}

void Akebono::setB(int pos, int farbe){
    byte a=0b01111111;
    byte b=0b01001001;
    byte c=0b00110110;
    Akebono::setAusgenge(a, b, a, c, 0b0, pos, farbe);
}

void Akebono::setC(int pos, int farbe){
    byte a=0b01111111;
    byte b=0b01000001;
    Akebono::setAusgenge(a, b, b, b, 0b0, pos, farbe);
}

void Akebono::setD(int pos, int farbe){
    byte a=0b01111111;
    byte b=0b01000001;
    byte c=0b01100011;
    byte d=0b00111100;
    Akebono::setAusgenge(a, b, c, d, 0b0, pos, farbe); 
}

void Akebono::setE(int pos, int farbe){
    byte a=0b01111111;
    byte b=0b01001001;
    Akebono::setAusgenge(a, b, b, b, 0b0, pos, farbe);
}

void Akebono::setF(int pos, int farbe){
    byte a=0b01111111;
    byte b=0b01001000;
    Akebono::setAusgenge(a, b, b, b, 0b0, pos, farbe);
}

void Akebono::setG(int pos, int farbe){
    byte a=0b01111111;
    byte b=0b01000001;
    byte c=0b01001001;
    byte d=0b01101111;
    Akebono::setAusgenge(a, b, c, d, 0b0, pos, farbe);
}

void Akebono::setH(int pos, int farbe){
    byte a=0b01111111;
    byte b=0b00001000;
    Akebono::setAusgenge(a, b, b, a, 0b0, pos, farbe);
}

void Akebono::setI(int pos, int farbe){
    byte a=0b01000001;
    byte b=0b01111111;
    Akebono::setAusgenge(a, b, a, 0b0, 0b0, pos, farbe);
}

void Akebono::setJ(int pos, int farbe){
    byte a=0b00000011;
    byte b=0b01100001;
    byte c=0b01000001;
    byte d=0b01111111;
    Akebono::setAusgenge(a, b, c, d, 0b0, pos, farbe);
}

void Akebono::setK(int pos, int farbe){
    byte a=0b01111111;
    byte b=0b00001100;
    byte c=0b00010010;
    byte d=0b00100001;
    Akebono::setAusgenge(a, b, c, d, 0b0, pos, farbe);
}

void Akebono::setL(int pos, int farbe){
    byte a=0b01111111;
    byte b=0b00000001;
    Akebono::setAusgenge(a, b, b, b, 0b0, pos, farbe);
}

void Akebono::setM(int pos, int farbe){
    byte a=0b01111111;
    byte b=0b00110000;
    byte c=0b00001000;
    Akebono::setAusgenge(a, b, c, b, a, pos, farbe);
}

void Akebono::setN(int pos, int farbe){
    byte a=0b01111111;
    byte b=0b00110000;
    byte c=0b00001100;
    Akebono::setAusgenge(a, b, c, a, 0b0, pos, farbe);
}

void Akebono::setO(int pos, int farbe){
    byte a=0b00111110;
    byte b=0b01100011;
    Akebono::setAusgenge(a, b, b, a, 0b0, pos, farbe);
}

void Akebono::setP(int pos, int farbe){
    byte a=0b01111111;
    byte b=0b01001000;
    byte c=0b01111000;
    Akebono::setAusgenge(a, b, b, c, 0b0, pos, farbe);
}

void Akebono::setQ(int pos, int farbe){
    byte a=0b00111110;
    byte b=0b01100010;
    byte c=0b01100111;
    Akebono::setAusgenge(a, b, c, a, 0b0, pos, farbe);
}

void Akebono::setR(int pos, int farbe){
    byte a=0b01111111;
    byte b=0b01001100;
    byte c=0b01001010;
    byte d=0b01111001;
    Akebono::setAusgenge(a, b, c, d, 0b0, pos, farbe);
}

void Akebono::setS(int pos, int farbe){
    byte a=0b01111001;
    byte b=0b01001001;
    byte c=0b01001111;
    Akebono::setAusgenge(a, b, b, c, 0b0, pos, farbe);  
}

void Akebono::setT(int pos, int farbe){
    byte a=0b01111111;
    byte b=0b01000000;
    Akebono::setAusgenge(b, a, b, 0b0, 0b0, pos, farbe);    
}

void Akebono::setU(int pos, int farbe){
    byte a=0b01111111;
    byte b=0b00000001;
    Akebono::setAusgenge(a, b, b, a, 0b0, pos, farbe);
}

void Akebono::setV(int pos, int farbe){
    byte a=0b01111100;
    byte b=0b00000111;
    Akebono::setAusgenge(a, b, b, a, 0b0, pos, farbe);    
}

void Akebono::setW(int pos, int farbe){
    byte a=0b01111111;
    byte b=0b00000110;
    byte c=0b00011100;
    Akebono::setAusgenge(a, b, c, b, a, pos, farbe);
}

void Akebono::setX(int pos, int farbe){
    byte a=0b01100011;
    byte b=0b00011100;
    Akebono::setAusgenge(a, b, b, a, 0b0, pos, farbe);    
}

void Akebono::setY(int pos, int farbe){
    byte a=0b01110000;
    byte b=0b00001111;
    Akebono::setAusgenge(a, b, b, a, 0b0, pos, farbe);    
}

void Akebono::setZ(int pos, int farbe){
    byte a=0b01000011;
    byte b=0b01000111;
    byte c=0b01011101;
    byte d=0b01111001;
    Akebono::setAusgenge(a, b, c, d, 0b0, pos, farbe);    
}