#include<Arduino.h>
#include<ShiftRegister.h>

ShiftRegister::ShiftRegister(uint8_t CLK, uint8_t RCLK, uint8_t OEL,uint8_t SERIN, uint8_t RESTL){
    _CLK = CLK;
    _RCLK = RCLK;
    _OEL = OEL;
    _SERIN = SERIN;
    _RESTL = RESTL;
    pinMode(_CLK,OUTPUT);
    pinMode(_RCLK,OUTPUT);
    pinMode(_OEL,OUTPUT);
    pinMode(_SERIN,OUTPUT);
    pinMode(_RESTL,OUTPUT);

    digitalWrite(_RESTL, HIGH);
    digitalWrite(_OEL, HIGH);
    digitalWrite(_CLK, LOW);
    digitalWrite(_RCLK, LOW);
    digitalWrite(_SERIN, LOW);
}
void ShiftRegister::clock(uint8_t a){
    digitalWrite(a, HIGH);
    digitalWrite(a, LOW);
}

void ShiftRegister::inputHigh(int a){

    digitalWrite(_SERIN, HIGH);
    for(int i=0; i < a; i++){
    ShiftRegister::clock(_CLK);
    }
    digitalWrite(_SERIN, LOW);

}

void ShiftRegister::inputLow(int a){

    digitalWrite(_SERIN, LOW);
    for(int i=0; i < a; i++){
    ShiftRegister::clock(_CLK);
    }
}
    

void ShiftRegister::setData(){

    ShiftRegister::clock(_RCLK);

}

void ShiftRegister::autputRowX(uint8_t a){
    digitalWrite(a, HIGH);
    digitalWrite(_OEL, LOW);
    delayMicroseconds(1);
    digitalWrite(_OEL, HIGH);
    digitalWrite(a, LOW);
}
void ShiftRegister::resat(){

    digitalWrite(_RESTL, LOW);
    digitalWrite(_RESTL, HIGH);
}