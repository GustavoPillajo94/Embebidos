#include <MsTimer2.h>
#include<avr/power.h>
#include<avr/sleep.h>
int on=0;
int lectura;
int lectura1=0;
int tiempo=0;
int cont=0; 
 void setup() {
 Serial.begin(9600);
  MsTimer2::set(1000, reloj);
  attachInterrupt(0,activacion,LOW);
}

void loop() {
    if(on==1){
  lectura=analogRead(0);
  lectura1=map(lectura,0,1023,0,60);
  Serial.println(String(lectura1)+String("ohms"));
  tiempo=tiempo+10;
    if(tiempo<60){
      Serial.println(String("tiempo:")+String(tiempo));
      }
      else{
        tiempo=0;
        }
  delay(1000);
    }

}
void activacion(){
  switch(on){
    case 0:
    Serial.println("inicio del sistema");
    power_adc_disable();
    on++;
    break;
    case 1:
    MsTimer2::start();
    on++;
    power_adc_enable();
    break;  
    }
  }
void reloj(){
    cont++;
     power_adc_disable();
    Serial.println(String("cronometro en:")+String(tiempo));
    if(cont==tiempo){
      power_adc_enable();
      delay(10);
      cont=0;
      }
}
