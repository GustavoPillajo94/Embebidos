#include<EEPROM.h>
String dato1; 
int dato2; 
int dato3;
int dato4;
int dato5;
int vector [4];
void setup() {
   Serial.begin(9600);
   clave();
}

void loop() {
   if(Serial.available()>0){
       dato1=Serial.readString();
       if(dato1.length()==1){
         dato2=dato1.toInt();        
         vector[0]=dato2; 
       }
         if(dato1.length()==1){ 
          dato3=dato1.toInt(); 
         vector[1]=dato3; 
         }
         if(dato1.length()==1){
          dato4=dato1.toInt();
         vector[2]=dato4;
         }
         if(dato1.length()==1){
          dato5=dato1.toInt();
         vector[3]=dato5; 
         }
       if(EEPROM.read(4)==vector[0]&&EEPROM.read(5)==vector[1]&&EEPROM.read(6)==vector[2]&&EEPROM.read(3)==vector[3]){
  
           Serial.println("CONTRASENA CORRECTA");
         }
       else{
               Serial.println("CONTRASENA INCORRECTA");
         }
    }
  }


void clave(){
  if(EEPROM.read(0)==255){
    EEPROM.write(0,0);  
    EEPROM.write(1,1);
    EEPROM.write(2,2);
    EEPROM.write(3,3);
    EEPROM.write(4,4);  
    
  }
  }
