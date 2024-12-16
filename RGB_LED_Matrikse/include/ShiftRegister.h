#ifndef SHIFTREGISTER_H
#define SHIFTREGISTER_H
#include <Arduino.h>
class ShiftRegister
{
private:
    uint8_t _CLK, _RCLK, _OEL, _SERIN, _RESTL;
    void clock(uint8_t a);
public:
    ShiftRegister(uint8_t CLK, uint8_t RCLK, uint8_t OEL, uint8_t SERIN, uint8_t RESTL);
    void inputHigh(int a=1);
    void inputLow(int a=1);
    void setData();
    /*!
    *   @brief The function autputRow order the Shift-Register to parallel-out must be gifen 
    *          the pord id of the to pull to GND to High.
    */
    void autputRowX(uint8_t a);
    void resat();
};
#endif
