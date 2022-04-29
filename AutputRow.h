#ifndef AUTPUTROW_H
#define AUTPUTROW_H

#include <Arduino.h>
#include <ShiftRegister.h>

class AutputRow{
private:
    uint8_t _ROW1, _ROW2, _ROW3, _ROW4, _ROW5, _ROW6, _ROW7, _ROW8;
    ShiftRegister* _shiftregister;
    void autputRows(byte b);    
public:
    AutputRow(uint8_t ROW1, uint8_t ROW2, uint8_t ROW3, uint8_t ROW4, uint8_t ROW5, uint8_t ROW6, uint8_t ROW7, uint8_t ROW8,ShiftRegister* sa); 
    void setPosShiftRegisterRGB(byte p1, byte p2, byte p3, byte p4, byte p5, byte p6, byte p7, byte p8,int f);
    void setAusgenge(byte a, byte b, byte c, byte d, byte e, int pos, int farbe);
};


#endif
