#include <Arduino.h>
#include <IpFour.h>
#include <AutputRow.h>

IpFour::IpFour(AutputRow* autputRow){
    _autputRow= autputRow;
}

void IpFour::berchnung(int s){
    int a , b , c , d ;
   
    int r = s/8;
    int rr = 0;

   switch (r)
   {
   case 3:
        rr = s - 24;
        a = 255;
        b = 255;
        c = 255;
        d = (256-(pow(2,(8-rr))));
    break;
    case 2:
        rr = s - 16;
        a = 255;
        b = 255;
        c = (256-(pow(2,(8-rr))));
        d = 0;
    break;
    case 1:
        rr = s - 8;
        a = 255;
        b = (256-(pow(2,(8-rr))));
        c = 0;
        d = 0;
    break;
    case 0:
        a = (256-(pow(2,(8-s))));
        b = 0;
        c = 0;
        d = 0;
    break;
   default:
        a = 0;
        b = 0;
        c = 0;
        d = 0;
    break;
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
