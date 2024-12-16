#include<Arduino.h>
#include<ShiftRegister.h>

ShiftRegister::ShiftRegister(uint8_t CLK, uint8_t RCLK, uint8_t OEL,uint8_t SERIN, uint8_t RESTL){      // Konstruktor
    _CLK = CLK;
    _RCLK = RCLK;                       // übergabe der pins an die privaten definds.
    _OEL = OEL;
    _SERIN = SERIN;
    _RESTL = RESTL;
    pinMode(_CLK,OUTPUT);               // vestlegen der pins 
    pinMode(_RCLK,OUTPUT);
    pinMode(_OEL,OUTPUT);
    pinMode(_SERIN,OUTPUT);
    pinMode(_RESTL,OUTPUT);

    digitalWrite(_RESTL, HIGH);         //Start werte festlegen.
    digitalWrite(_OEL, HIGH);
    digitalWrite(_CLK, LOW);
    digitalWrite(_RCLK, LOW);
    digitalWrite(_SERIN, LOW);
}


void ShiftRegister::clock(uint8_t a){       // Erstelen eins clocks signals.
    digitalWrite(a, HIGH);
    digitalWrite(a, LOW);
}

void ShiftRegister::inputHigh(int a){   // HIGH wert einlesen mit 1 als defloltwert.

    digitalWrite(_SERIN, HIGH);
    for(int i=0; i < a; i++){
    ShiftRegister::clock(_CLK);
    }
    digitalWrite(_SERIN, LOW);

}

void ShiftRegister::inputLow(int a){     // LOW wert einlesen mit 1 als defloltwert.  

    digitalWrite(_SERIN, LOW);
    for(int i=0; i < a; i++){
    ShiftRegister::clock(_CLK);
    }
}
    

void ShiftRegister::setData(){      //set the valus to the next fliplop.

    ShiftRegister::clock(_RCLK);

}

void ShiftRegister::autputRowX(uint8_t a){  // ausgabe reihe über transitor möglich.
    digitalWrite(a, HIGH);
    digitalWrite(_OEL, LOW);
    delayMicroseconds(1);
    digitalWrite(_OEL, HIGH);
    digitalWrite(a, LOW);
}
void ShiftRegister::resat(){            // RESAT stetz alle werte zurük.

    digitalWrite(_RESTL, LOW);
    digitalWrite(_RESTL, HIGH);
}
