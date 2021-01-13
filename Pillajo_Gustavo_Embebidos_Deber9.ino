#include <avr/wdt.h>
#include<MsTimer2.h>
int marcador; 
int tiempo=0;
int cont=0;
int on=0;

void setup(){
  Serial.begin(9600);
  MsTimer2::set(1000, reinicio);
  attachInterrupt(0,activacion,LOW);
}
void loop(){
  if(on==1){
  marcador=analogRead(0);
  tiempo=map(marcador,0,1023,0,60);
  Serial.println(String(tiempo)+String("segundos"));
  delay(1000);
 }
}
void reinicio(){
  cont++;
  Serial.println(cont);
  if(cont==tiempo){
    Serial.println("reinicio");
    wdt_disable();
    wdt_enable(WDTO_15MS); 
  }
}
void activacion(){
  switch(on){
    case 0:
      Serial.println("inicio del sistema");
      Serial.println("seleccione tiempo de reinicio: ");
      on++;
    break;
    case 1:
      Serial.println(String("reinici del sistema en: ")+String(tiempo)+String("segundos"));
      MsTimer2::start();
      on++;
    break;
  }
}
