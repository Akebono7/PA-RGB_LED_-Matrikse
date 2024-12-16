#ifndef NUMBERS_H
#define NUMBERS_H

#include <Arduino.h>
#include <ShiftRegister.h>
#include <AutputRow.h>

class Numbers
{
private:
     AutputRow* _autputRow;

    int setNumberAut(char inputCharNumber, int farbe, int pos);
public:
    Numbers(AutputRow* autputRow);
    int setNumbersAusgabe(String number, int farbe);


};
#endif
