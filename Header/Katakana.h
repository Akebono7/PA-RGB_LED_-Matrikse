#ifndef KATAKANA_H
#define KATAKANA_H

#include <Arduino.h>
#include <ShiftRegister.h>
#include <AutputRow.h>

class Katakana{
private:
    
    AutputRow* _autputRow;
public:

    Katakana(AutputRow* autputRow);

    void setA(int pos, int farbe);
    void setI(int pos, int farbe);


};
#endif