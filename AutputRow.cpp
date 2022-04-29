#include <Arduino.h>
#include <AutputRow.h>
#include <ShiftRegister.h>

AutputRow::AutputRow(uint8_t ROW1, uint8_t ROW2, uint8_t ROW3, uint8_t ROW4, uint8_t ROW5, uint8_t ROW6, uint8_t ROW7, uint8_t ROW8, ShiftRegister* sa){
        _ROW1 = ROW1;
        _ROW2 = ROW2;
        _ROW3 = ROW3;
        _ROW4 = ROW4;
        _ROW5 = ROW5;
        _ROW6 = ROW6;
        _ROW7 = ROW7;
        _ROW8 = ROW8;
        _shiftregister= sa;

        pinMode(_ROW1, OUTPUT);
        pinMode(_ROW2, OUTPUT);
        pinMode(_ROW3, OUTPUT);
        pinMode(_ROW4, OUTPUT);
        pinMode(_ROW5, OUTPUT);
        pinMode(_ROW6, OUTPUT);
        pinMode(_ROW7, OUTPUT);
        pinMode(_ROW8, OUTPUT);
        digitalWrite(_ROW1, LOW);
        digitalWrite(_ROW2, LOW);
        digitalWrite(_ROW3, LOW);
        digitalWrite(_ROW4, LOW);
        digitalWrite(_ROW5, LOW);
        digitalWrite(_ROW6, LOW);
        digitalWrite(_ROW7, LOW);
        digitalWrite(_ROW8, LOW);
}
void AutputRow::autputRows(byte b){
    if(b>=0b10000000){
        _shiftregister->autputRowX(_ROW8);
        b=b-0b10000000;
    }
    if(b>=0b1000000){
        _shiftregister->autputRowX(_ROW7);
        b=b-0b1000000;
    }
    if(b>=0b100000){
        _shiftregister->autputRowX(_ROW6);
        b=b-0b100000;
    }
    if(b>=0b10000){
        _shiftregister->autputRowX(_ROW5);
        b=b-0b10000;
    }
    if(b>=0b1000){
        _shiftregister->autputRowX(_ROW4);
        b=b-0b1000;
    }
    if(b>=0b100){
        _shiftregister->autputRowX(_ROW3);
        b=b-0b100;
    }
    if(b>=0b10){
        _shiftregister->autputRowX(_ROW2);
        b=b-0b10;
    }
    if(b>=0b1){
        _shiftregister->autputRowX(_ROW1);
    }
}

void AutputRow::setPosShiftRegisterRGB(byte p1, byte p2, byte p3, byte p4, byte p5, byte p6, byte p7, byte p8,int f){
    _shiftregister->inputHigh();
    if(f==0){
        _shiftregister->inputLow();
    }else if(f==1){
        _shiftregister->inputLow(2);
    }else{
        _shiftregister->inputLow(3);
    }
    _shiftregister->setData();
    AutputRow::autputRows(p1);
    _shiftregister->inputLow(4);
    _shiftregister->setData();
    AutputRow::autputRows(p2);
    _shiftregister->inputLow(4);
    _shiftregister->setData();
    AutputRow::autputRows(p3);
    _shiftregister->inputLow(4);
    _shiftregister->setData();
    AutputRow::autputRows(p4);
    _shiftregister->inputLow(4);
    _shiftregister->setData();
    AutputRow::autputRows(p5);
    _shiftregister->inputLow(4);
    _shiftregister->setData();
    AutputRow::autputRows(p6);
    _shiftregister->inputLow(4);
    _shiftregister->setData();
    AutputRow::autputRows(p7);
    _shiftregister->inputLow(4);
    _shiftregister->setData();
    AutputRow::autputRows(p8);
    _shiftregister->resat();
}

void AutputRow::setAusgenge(byte a, byte b, byte c, byte d, byte e, int pos ,int farbe){
    if(pos==1){
        AutputRow::setPosShiftRegisterRGB(e, 0b0, 0b0, 0b0, 0b0, 0b0, 0b0, 0b0, farbe);
    }else if(pos==2){
        AutputRow::setPosShiftRegisterRGB(d, e,0b0, 0b0, 0b0, 0b0, 0b0, 0b0, farbe);
    }else if(pos==3){
        AutputRow::setPosShiftRegisterRGB(c, d, e, 0b0, 0b0, 0b0, 0b0, 0b0, farbe);
    }else if(pos==4){
        AutputRow::setPosShiftRegisterRGB(b, c, d, e, 0b0, 0b0, 0b0, 0b0, farbe);
    }else if(pos==5){
        AutputRow::setPosShiftRegisterRGB(a, b, c, d, e, 0b0, 0b0, 0b0, farbe);
    }else if (pos==6){
        AutputRow::setPosShiftRegisterRGB(0b0, a, b, c, d, e, 0b0, 0b0, farbe);
    }else if(pos==7){
        AutputRow::setPosShiftRegisterRGB(0b0, 0b0, a, b, c, d, e, 0b0, farbe);
    }else if(pos==8){
        AutputRow::setPosShiftRegisterRGB(0b0, 0b0, 0b0, a, b, c, d, e, farbe);
    }else if(pos==9){
        AutputRow::setPosShiftRegisterRGB(0b0, 0b0, 0b0, 0b0, a, b, c, d, farbe);
    }else if(pos==10){
        AutputRow::setPosShiftRegisterRGB(0b0, 0b0, 0b0, 0b0, 0b0, a, b, c, farbe);
    }else if(pos==11){
        AutputRow::setPosShiftRegisterRGB(0b0, 0b0, 0b0, 0b0, 0b0, 0b0, a, b, farbe);   
    }else if(pos==12){
        AutputRow::setPosShiftRegisterRGB(0b0, 0b0, 0b0, 0b0, 0b0, 0b0, 0b0, a, farbe);
    }
}
