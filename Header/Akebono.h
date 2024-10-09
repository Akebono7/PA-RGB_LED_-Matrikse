#ifndef AKEBONO_H
#define AKEBONO_H
#include <Arduino.h>
#include <AutputRow.h>

class Akebono{
    private:
    AutputRow* _autputRow;
    void charakter(char a, int farbe, int pos);
    void setSpace(int pos, int farbe);
    public:
    /*!
    *   @brief Der construktor der Akebono Klasse bekomt ein objekt id eines 
    *   Objektes der AutputRow Klasse.(&objekt);
    */
    Akebono(AutputRow* autputRow);
    /*! @brief setzt A als ausgabe pos gipt die postion des zeichens ann werte von 1 bis 12.
    *   farbe end scheidet welche angesteuert wirt. 0=ROT 1=Grühen 2=Blau.
    */ 
};
#endif
