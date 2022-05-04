#include <Arduino.h>
#include <IpFour.h>
#include <AutputRow.h>

IpFour::IpFour(AutputRow* autputRow){
    _autputRow= autputRow;
}

void IpFour::berchnung(int s){
    int a, b, c, d;
    
        a=0;
        b=0;
        c=0;
        d=0;
    if(s>=8){
        a=255;
        s=s-8;
        if(s>=8){
            b=255;
            s=s-8;
            if(s>=8){
                c=255;
                s=s-8;
                if(s>=8){
                    d=255;
                    s=s-8;
                }else{
                    d=pow(2,s)-1;
                }
            }else{
                c=pow(2,s)-1;
            }
        }else{
            b=pow(2,s)-1;
        }
    }else{
        a=pow(2,s)-1;
    }
    _autputRow->setPosShiftRegisterRGB(0, a, 0, b, 0, c, 0, d, 2);
}

void IpFour::setIPadresse(int ipa, int ipb, int ipc, int ipd, int ipsub){
    _autputRow->setPosShiftRegisterRGB(ipa, 0, ipb, 0, ipc, 0, ipd, 0, 1);
    IpFour::berchnung(ipsub);
}
