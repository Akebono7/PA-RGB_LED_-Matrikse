#include <Arduino.h>
#include <Akebono.h>
#include <AutputRow.h>
#include <ShiftRegister.h>
#include <Numbers.h>
#include <BluetoothSerial.h>
#include <IpFour.h>

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
Numbers Numbers_c(&Autputrow_c);
IpFour IpFour_c(&Autputrow_c);

BluetoothSerial SerialBT;

String string_input = "NEW";     // autput text 
String numbers_input = "1234";   // autput number
int mod = 0;                     // autput systeme mod switche varibale

volatile int ipaddress_pos_a, ipaddress_pos_b, ipaddress_pos_c, ipaddress_pos_d, subnetmaske; // ipaddress V4 in dezemale riting and subnete maske in / 
volatile int color = 0;   // color red = 0 ,green = 1 ,blue = 2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  SerialBT.begin("ESP_PA_RGB_LED");
}
int dataResive(){
  String input_data = SerialBT.readStringUntil('/');
  if(input_data == "STRING"){
    string_input = SerialBT.readStringUntil('/');
    color = SerialBT.readStringUntil('/').toInt();
    return 1;
  }
  if(input_data == "NUMBER"){
    numbers_input = SerialBT.readStringUntil('/');
    color = SerialBT.readStringUntil('/').toInt();
    return 2;
  } 
  if(input_data == "IPv4"){
    ipaddress_pos_a = SerialBT.readStringUntil('.').toInt();
    ipaddress_pos_b = SerialBT.readStringUntil('.').toInt();
    ipaddress_pos_c = SerialBT.readStringUntil('.').toInt();
    ipaddress_pos_d = SerialBT.readStringUntil('.').toInt();
    subnetmaske = SerialBT.readStringUntil('/').toInt();
    return 3;
  }
  return 0;
}

void loop() {

  if(SerialBT.available()>0){
    mod = dataResive();
  }
  
  switch (mod){

  case 0:
    Autputrow_c.setFehler();
    break;

  case 1:
    Akebono_c.setString(string_input, color);
    break;
  
  case 2:
    Numbers_c.setNumbersAusgabe(numbers_input, color);
    break;
  
  case 3:
    IpFour_c.setIPadresse(ipaddress_pos_a, ipaddress_pos_b, ipaddress_pos_c, ipaddress_pos_d, subnetmaske);
    break;
      
  default:
    break;
  }  
}
