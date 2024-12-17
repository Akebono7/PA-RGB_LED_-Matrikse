#include <Arduino.h>
#include <Akebono.h>
#include <AutputRow.h>
#include <ShiftRegister.h>

#define R1GND 32
#define R2GND 33
#define R3GND 25
#define R4GND 26
#define R5GND 27
#define R6GND 14
#define R7GND 12
#define R8GND 13
#define SERIN 19
#define OEL 18
#define RCLK 5
#define CLK 17
#define RESTL 16

ShiftRegister Shiftregister_c(CLK, RCLK, OEL, SERIN, RESTL);
AutputRow Autputrow_c(R1GND, R2GND, R3GND, R4GND, R5GND, R6GND, R7GND, R8GND, &Shiftregister_c);
Akebono Akebono_c(&Autputrow_c);

void setup(){

}
void main(){
    int color = 0; // color red = 0 ,green = 1 ,blue = 2

    Akebono_c.setString("input text",color); 

}