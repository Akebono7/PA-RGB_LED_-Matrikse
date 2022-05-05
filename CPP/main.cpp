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


int tim=0;

ShiftRegister S(CLK, RCLK, OEL, SERIN, RESTL);
AutputRow aur(R1GND, R2GND, R3GND, R4GND, R5GND, R6GND, R7GND, R8GND, &S);
Akebono ake(&aur);
Numbers nr(&aur);
IpFour ip(&aur);

hw_timer_t* timer = NULL;
BluetoothSerial SerialBT;

String wordI="NEW";
String numbers="1234";
int modus=0;

volatile int ip1, ip2, ip3, ip4, ipsub;
volatile int zeler =0;
volatile int farbe=0;
void onTimer() {		// Interrupt-Service-Routine
  zeler++;
  if(zeler==61){
    zeler=0;
  }
}

void setup() {
  // put your setup code here, to run once:
  timer= timerBegin(0,80,true);
  timerAttachInterrupt(timer,&onTimer,true);
  timerAlarmWrite(timer,1000000,true);
  timerAlarmEnable(timer);
  Serial.begin(9600);
  SerialBT.begin("ESP_PA_RGB_LED");
}
void dataResive(){
  String s=SerialBT.readStringUntil('/');
  if(s=="STRING"){
    wordI=SerialBT.readStringUntil('/');
    farbe=SerialBT.readStringUntil('/').toInt();
    modus=1;
  }else if(s=="NUMBER"){
    numbers=SerialBT.readStringUntil('/');
    farbe=SerialBT.readStringUntil('/').toInt();
    modus=2;
  }else if(s=="IPv4"){
    ip1=SerialBT.readStringUntil('.').toInt();
    ip2=SerialBT.readStringUntil('.').toInt();
    ip3=SerialBT.readStringUntil('.').toInt();
    ip4=SerialBT.readStringUntil('.').toInt();
    ipsub=SerialBT.readStringUntil('/').toInt();
    modus=3;
  }else{
    modus=0;
  }
}

void loop() {

  if(SerialBT.available()>0){
    dataResive();
  }
  
  switch (modus){

  case 0:
    aur.setFehler();
    break;

  case 1:
    ake.setString(wordI, farbe);
    break;
  
  case 2:
    nr.setNumbersAusgabe(numbers, farbe);
    break;
  
  case 3:
    ip.setIPadresse(ip1, ip2, ip3, ip4, ipsub);
    break;
  default:
    break;
  }
  
}
