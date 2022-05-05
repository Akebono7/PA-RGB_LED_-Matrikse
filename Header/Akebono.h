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
    Akebono(AutputRow* autputRow);
    /*! @brief setzt A als ausgabe pos gipt die postion des zeichens ann werte von 1 bis 12.
    *   farbe end scheidet welche angesteuert wirt. 0=ROT 1=Grühen 2=Blau.
    */
    void setA(int pos, int farbe);
    void setB(int pos, int farbe);
    void setC(int pos, int farbe);
    void setD(int pos, int farbe);
    void setE(int pos, int farbe);
    void setF(int pos, int farbe);
    void setG(int pos, int farbe);
    void setH(int pos, int farbe);
    void setI(int pos, int farbe);
    void setJ(int pos, int farbe);
    void setK(int pos, int farbe);
    void setL(int pos, int farbe);
    void setM(int pos, int farbe);
    void setN(int pos, int farbe);
    void setO(int pos, int farbe);
    void setP(int pos, int farbe);
    void setQ(int pos, int farbe);
    void setR(int pos, int farbe);
    void setS(int pos, int farbe);
    void setT(int pos, int farbe);
    void setU(int pos, int farbe);
    void setV(int pos, int farbe);
    void setW(int pos, int farbe);
    void setX(int pos, int farbe);
    void setY(int pos, int farbe);
    void setZ(int pos, int farbe);
    void setPoint(int pos, int farbe);
    void setString(String a, int farbe);
};
#endif
