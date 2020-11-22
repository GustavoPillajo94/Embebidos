int led1=2;
int led2=3;
int led3=4;
int led4=5;
int led5=6;
int led6=7;

int sw1=8;
int sw2=9;
int sw3=10;
int sw4=11;

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  
  pinMode(sw1,INPUT);
  pinMode(sw2,INPUT);
  pinMode(sw3,INPUT);
  pinMode(sw4,INPUT);
  
}

void loop() {

  if(digitalRead(sw1)==HIGH){
     for(int i=0; i<10; i++)
    {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, LOW);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, LOW);
      delay(500);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      delay(500);
    }
    
    }
    else if(digitalRead(sw2)==HIGH){
      for(int l=0; l<10; l++)
    {
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, LOW);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, LOW);
      digitalWrite(led6, HIGH);
      delay(500);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      delay(500);
    }
        
        }
        else if(digitalRead(sw3)==HIGH){
          for(byte s3=0; s3<12; s3++)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, LOW);
    delay(500);
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, LOW);
    digitalWrite(led6, HIGH);
    delay(500);
  }
          
            
            }
            else if(digitalRead(sw4)==HIGH){
               for(byte s4=0; s4<8; s4++)
  {
    for(int k=0; k<4; k++)
    {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      delay(100);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      delay(100);
    }
    for(int m=0; m<4; m++)
    {
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      delay(100);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      delay(100);
    }
  }
              
                
                }
                else{
                  digitalWrite(led1,LOW);
                  digitalWrite(led2,LOW);
                  digitalWrite(led3,LOW);
                  digitalWrite(led4,LOW);
                  digitalWrite(led5,LOW);
                  digitalWrite(led6,LOW);
                  
                  
                  }
               


}
