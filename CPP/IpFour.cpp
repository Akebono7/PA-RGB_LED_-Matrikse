#include <Arduino.h>
#include <IpFour.h>
#include <AutputRow.h>

IpFour::IpFour(AutputRow* autputRow){
    _autputRow= autputRow;
}
int IpFour::berenugbits(int a){
        int c = 0;
        switch (a){
        case 1:
            c = 128;
            break;
        case 2:
            c = 192;
            break;
        case 3:
            c = 224;
            break;
        case 4:
            c = 240;
            break;
        case 5:
            c = 248;
            break;
        case 6:
            c = 252;
            break;
        case 7:
            c = 254;
            break;
        case 8: 
            c = 255;
            break;
        default :
            c = 0;    
            break;
        }
        return c ;
}

void IpFour::berchnung(int s){
    int a, b, c, d; 
   if(s>=24){
        int f = s-24;
        a = IpFour::berenugbits(8);
        b = IpFour::berenugbits(8);
        c = IpFour::berenugbits(8);
        d = IpFour::berenugbits(f);
   }else if(s>=16){
        int f = s-16;
        a = IpFour::berenugbits(8);
        b = IpFour::berenugbits(8);
        c = IpFour::berenugbits(f);
        d = IpFour::berenugbits(0);
   }else if(s>=8){
        int f = s-8;
        a = IpFour::berenugbits(8);
        b = IpFour::berenugbits(f);
        c = IpFour::berenugbits(0);
        d = IpFour::berenugbits(0);
   }else{
        int f = s;
        a = IpFour::berenugbits(f);
        b = IpFour::berenugbits(0);
        c = IpFour::berenugbits(0);
        d = IpFour::berenugbits(0);
   }
    _autputRow->setPosShiftRegisterRGB(0, a, 0, b, 0, c, 0, d, 2);
}

String IpFour::faltProtition(int ipa, int ipb, int ipc, int ipd, int ipsub){
    String falte = "0";

    if(ipa<0){
        falte += "/040";
    }
    if(ipa>255){
        falte += "/041";
    }
    if(ipb<0){
        falte += "/030";
    }
    if(ipb>255){
        falte += "/031";
    }
    if(ipc<0){
        falte += "/020";
    }
    if(ipc>255){
        falte += "/021";
    }
    if(ipd<0){
        falte += "/010";
    }
    if(ipd>255){
        falte += "/011";
    }
    if(ipsub<0){
        falte += "/110";
    }
    if(ipsub>32){
        falte += "/111";
    }
    return falte;
}

String IpFour::setIPadresse(int ipa, int ipb, int ipc, int ipd, int ipsub){
    String falte = IpFour::faltProtition(ipa, ipb, ipc, ipd, ipsub);
    if(falte=="0"){
        _autputRow->setPosShiftRegisterRGB(ipa, 0, ipb, 0, ipc, 0, ipd, 0, 1);
        IpFour::berchnung(ipsub);
        return "";
    }else{
        _autputRow->setFehler();
        return falte;
    }  
}
