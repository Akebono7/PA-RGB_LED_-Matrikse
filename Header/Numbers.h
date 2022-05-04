#ifndef NUMBERS_H
#define NUMBERS_H

#include <Arduino.h>
#include <ShiftRegister.h>
#include <AutputRow.h>

class Numbers
{
private:
     AutputRow* _autputRow;
    void setNull(int pos, int farbe);
    void setOne(int pos, int farbe);
    void setTwo(int pos, int farbe);
    void setThree(int pos, int farbe);
    void setFour(int pos, int farbe);
    void setFive(int pos, int farbe);
    void setSIX(int pos, int farbe);
    void setSeven(int pos, int farbe);
    void setEight(int pos, int farbe);
    void setNine(int pos, int farbe);
    int setNumberAut(char a, int farbe, int pos);
public:
    Numbers(AutputRow* autputRow);
    int setNumbersAusgabe(String number, int farbe);


};
#endif
