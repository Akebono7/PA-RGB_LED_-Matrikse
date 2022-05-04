#ifndef IPFOUR_H
#define IPFOUR_H

#include <Arduino.h>
#include <AutputRow.h>


class IpFour
{
private:
    AutputRow* _autputRow;
    void berchnung(int s);
public:
    IpFour(AutputRow* autputRow);
    void setIPadresse(int ipa, int ipb, int ipc, int ipd, int ipsub);
};
#endif
