#include<Servo.h>
Servo servo_1;
int mod=0;

void setup() {
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(2),modos,RISING);
 servo_1.attach(9, 500, 2500);
//  servo_1.write(pos);
}

void loop() {
  if(mod==1){
    Serial.print("Giro del motor");
    if(Serial.available()<0){
    int giro=Serial.read();
    servo_1.write(giro);
    }
    }
delay(1000);
}
void modos(){
  switch(mod){
  case 0:
  Serial.print("inicio del sistema");
  mod++;
  break;
  case 1:
  Serial.print("giro del motor");
  mod++;
  break;
  case 2:
  Serial.print("fin del programa");
  mod=0;
  break;
  }
  }
  
