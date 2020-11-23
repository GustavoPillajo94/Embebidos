const int a=0; 
const int b=1; 
const int c=2; 
const int d=3; 
const int e=4;
const int f=5;
const int g=6;
const int a1=7;
const int b1=8;
const int c1=9;
const int d1=10;
const int e1=11;
const int f1=12;
const int g1=13;

int sw=7;
int cont;

void setup(){
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  
  pinMode(a1,OUTPUT);
  pinMode(b1,OUTPUT);
  pinMode(c1,OUTPUT);
  pinMode(d1,OUTPUT);
  pinMode(e1,OUTPUT);
  pinMode(f1,OUTPUT);
  pinMode(g1,OUTPUT);

  
  pinMode(sw,INPUT);
 
  }
  void loop(){
    for(cont=0;cont<25;cont++){ 
    delay(300); 
     switch(cont){
        case 2:
          digitalWrite(a,HIGH); 
          digitalWrite(b,HIGH); 
          digitalWrite(c,HIGH); 
          digitalWrite(d,HIGH); 
          digitalWrite(e,HIGH); 
          digitalWrite(f,HIGH); 
          digitalWrite(g,LOW);

          digitalWrite(a1,HIGH); 
          digitalWrite(b1,HIGH); 
          digitalWrite(c1,LOW); 
          digitalWrite(d1,HIGH); 
          digitalWrite(e1,HIGH); 
          digitalWrite(f1,LOW); 
          digitalWrite(g1,HIGH); 
        break;
        case 3:
          digitalWrite(a,HIGH); 
          digitalWrite(b,HIGH);  
          digitalWrite(c,HIGH);  
          digitalWrite(d,HIGH);  
          digitalWrite(e,HIGH); 
          digitalWrite(f,HIGH); 
          digitalWrite(g,LOW);

          digitalWrite(a1,HIGH); 
          digitalWrite(b1,HIGH); 
          digitalWrite(c1,HIGH); 
          digitalWrite(d1,HIGH); 
          digitalWrite(e1,LOW); 
          digitalWrite(f1,LOW); 
          digitalWrite(g1,HIGH);
        break;
        case 5:
          digitalWrite(a,HIGH);  
          digitalWrite(b,HIGH); 
          digitalWrite(c,HIGH);  
          digitalWrite(d,HIGH);
          digitalWrite(e,HIGH); 
          digitalWrite(f,HIGH); 
          digitalWrite(g,LOW); 

          digitalWrite(a1,HIGH); 
          digitalWrite(b1,LOW); 
          digitalWrite(c1,HIGH); 
          digitalWrite(d1,HIGH); 
          digitalWrite(e1,LOW); 
          digitalWrite(f1,HIGH); 
          digitalWrite(g1,HIGH);  
        break;
        case 7:
          digitalWrite(a,HIGH); 
          digitalWrite(b,HIGH); 
          digitalWrite(c,HIGH);  
          digitalWrite(d,HIGH);
          digitalWrite(e,HIGH); 
          digitalWrite(f,HIGH); 
          digitalWrite(g,LOW); 

          digitalWrite(a1,HIGH); 
          digitalWrite(b1,HIGH); 
          digitalWrite(c1,HIGH); 
          digitalWrite(d1,LOW); 
          digitalWrite(e1,LOW); 
          digitalWrite(f1,LOW); 
          digitalWrite(g1,LOW); 
        break;
        case 11:
          digitalWrite(a,LOW);  
          digitalWrite(b,HIGH);  
          digitalWrite(c,HIGH); 
          digitalWrite(d,LOW); 
          digitalWrite(e,LOW); 
          digitalWrite(f,LOW); 
          digitalWrite(g,LOW); 

          digitalWrite(a1,LOW); 
          digitalWrite(b1,HIGH); 
          digitalWrite(c1,HIGH); 
          digitalWrite(d1,LOW); 
          digitalWrite(e1,LOW); 
          digitalWrite(f1,LOW); 
          digitalWrite(g1,LOW); 
        break;   
        case 13:
          digitalWrite(a,LOW);  
          digitalWrite(b,HIGH);  
          digitalWrite(c,HIGH); 
          digitalWrite(d,LOW); 
          digitalWrite(e,LOW); 
          digitalWrite(f,LOW); 
          digitalWrite(g,LOW); 

          digitalWrite(a1,HIGH); 
          digitalWrite(b1,HIGH); 
          digitalWrite(c1,HIGH); 
          digitalWrite(d1,HIGH); 
          digitalWrite(e1,LOW); 
          digitalWrite(f1,LOW); 
          digitalWrite(g1,HIGH);
        break;
        case 17:
          digitalWrite(a,LOW);  
          digitalWrite(b,HIGH);  
          digitalWrite(c,HIGH); 
          digitalWrite(d,LOW); 
          digitalWrite(e,LOW); 
          digitalWrite(f,LOW); 
          digitalWrite(g,LOW); 

          digitalWrite(a1,HIGH); 
          digitalWrite(b1,HIGH); 
          digitalWrite(c1,HIGH); 
          digitalWrite(d1,LOW); 
          digitalWrite(e1,LOW); 
          digitalWrite(f1,LOW); 
          digitalWrite(g1,LOW); 
        break;
        case 19:
          digitalWrite(a,LOW);  
          digitalWrite(b,HIGH);  
          digitalWrite(c,HIGH); 
          digitalWrite(d,LOW); 
          digitalWrite(e,LOW); 
          digitalWrite(f,LOW); 
          digitalWrite(g,LOW); 

          digitalWrite(a1,HIGH); 
          digitalWrite(b1,HIGH); 
          digitalWrite(c1,HIGH); 
          digitalWrite(d1,HIGH); 
          digitalWrite(e1,LOW); 
          digitalWrite(f1,HIGH); 
          digitalWrite(g1,HIGH); 
        break;
        case 23:
          digitalWrite(a,HIGH);  
          digitalWrite(b,HIGH);  
          digitalWrite(c,LOW); 
          digitalWrite(d,HIGH); 
          digitalWrite(e,HIGH); 
          digitalWrite(f,LOW); 
          digitalWrite(g,HIGH); 

          digitalWrite(a1,HIGH); 
          digitalWrite(b1,HIGH); 
          digitalWrite(c1,HIGH); 
          digitalWrite(d1,HIGH); 
          digitalWrite(e1,LOW); 
          digitalWrite(f1,LOW); 
          digitalWrite(g1,HIGH);
        break;
        case 29:
          digitalWrite(a,HIGH);  
          digitalWrite(b,HIGH);  
          digitalWrite(c,LOW); 
          digitalWrite(d,HIGH); 
          digitalWrite(e,HIGH); 
          digitalWrite(f,LOW); 
          digitalWrite(g,HIGH); 

          digitalWrite(a1,HIGH); 
          digitalWrite(b1,HIGH); 
          digitalWrite(c1,HIGH); 
          digitalWrite(d1,HIGH); 
          digitalWrite(e1,LOW); 
          digitalWrite(f1,HIGH); 
          digitalWrite(g1,HIGH);
        break;
        case 31:
          digitalWrite(a,HIGH);  
          digitalWrite(b,HIGH);  
          digitalWrite(c,HIGH); 
          digitalWrite(d,HIGH); 
          digitalWrite(e,LOW); 
          digitalWrite(f,LOW); 
          digitalWrite(g,HIGH); 

          digitalWrite(a1,LOW); 
          digitalWrite(b1,HIGH); 
          digitalWrite(c1,HIGH); 
          digitalWrite(d1,LOW); 
          digitalWrite(e1,LOW); 
          digitalWrite(f1,LOW); 
          digitalWrite(g1,LOW); 
        break;
        case 37:
          digitalWrite(a,HIGH);  
          digitalWrite(b,HIGH);  
          digitalWrite(c,HIGH); 
          digitalWrite(d,HIGH); 
          digitalWrite(e,LOW); 
          digitalWrite(f,LOW); 
          digitalWrite(g,HIGH); 

          digitalWrite(a1,HIGH); 
          digitalWrite(b1,HIGH); 
          digitalWrite(c1,HIGH); 
          digitalWrite(d1,LOW); 
          digitalWrite(e1,LOW); 
          digitalWrite(f1,LOW); 
          digitalWrite(g1,LOW); 
        break;
        case 41:
          digitalWrite(a,LOW);  
          digitalWrite(b,HIGH);  
          digitalWrite(c,HIGH); 
          digitalWrite(d,LOW); 
          digitalWrite(e,LOW); 
          digitalWrite(f,HIGH); 
          digitalWrite(g,HIGH); 

          digitalWrite(a1,LOW); 
          digitalWrite(b1,HIGH); 
          digitalWrite(c1,HIGH); 
          digitalWrite(d1,LOW); 
          digitalWrite(e1,LOW); 
          digitalWrite(f1,LOW); 
          digitalWrite(g1,LOW); 
        break;
        case 43:
          digitalWrite(a,LOW);  
          digitalWrite(b,HIGH);  
          digitalWrite(c,HIGH); 
          digitalWrite(d,LOW); 
          digitalWrite(e,LOW); 
          digitalWrite(f,HIGH); 
          digitalWrite(g,HIGH); 

          digitalWrite(a1,HIGH); 
          digitalWrite(b1,HIGH); 
          digitalWrite(c1,HIGH); 
          digitalWrite(d1,HIGH); 
          digitalWrite(e1,LOW); 
          digitalWrite(f1,LOW); 
          digitalWrite(g1,HIGH); 
        break;
        case 47:
          digitalWrite(a,LOW);  
          digitalWrite(b,HIGH);  
          digitalWrite(c,HIGH); 
          digitalWrite(d,LOW); 
          digitalWrite(e,LOW); 
          digitalWrite(f,HIGH); 
          digitalWrite(g,HIGH); 

          digitalWrite(a1,HIGH); 
          digitalWrite(b1,HIGH); 
          digitalWrite(c1,HIGH); 
          digitalWrite(d1,LOW); 
          digitalWrite(e1,LOW); 
          digitalWrite(f1,LOW); 
          digitalWrite(g1,LOW); 
        break;
        case 53:
          digitalWrite(a,HIGH);  
          digitalWrite(b,LOW);  
          digitalWrite(c,HIGH); 
          digitalWrite(d,HIGH); 
          digitalWrite(e,LOW); 
          digitalWrite(f,HIGH); 
          digitalWrite(g,HIGH); 

          digitalWrite(a1,HIGH); 
          digitalWrite(b1,HIGH); 
          digitalWrite(c1,HIGH); 
          digitalWrite(d1,HIGH); 
          digitalWrite(e1,LOW); 
          digitalWrite(f1,LOW); 
          digitalWrite(g1,HIGH);    
        break;
        case 59:
          digitalWrite(a,HIGH);  
          digitalWrite(b,LOW);  
          digitalWrite(c,HIGH); 
          digitalWrite(d,HIGH); 
          digitalWrite(e,LOW); 
          digitalWrite(f,HIGH); 
          digitalWrite(g,HIGH); 

          digitalWrite(a1,HIGH); 
          digitalWrite(b1,HIGH); 
          digitalWrite(c1,HIGH); 
          digitalWrite(d1,HIGH); 
          digitalWrite(e1,LOW); 
          digitalWrite(f1,HIGH); 
          digitalWrite(g1,HIGH); 
        break;
        case 61:
          digitalWrite(a,HIGH);  
          digitalWrite(b,LOW);  
          digitalWrite(c,HIGH); 
          digitalWrite(d,HIGH); 
          digitalWrite(e,HIGH); 
          digitalWrite(f,HIGH); 
          digitalWrite(g,HIGH); 

          digitalWrite(a1,LOW); 
          digitalWrite(b1,HIGH); 
          digitalWrite(c1,HIGH); 
          digitalWrite(d1,LOW); 
          digitalWrite(e1,LOW); 
          digitalWrite(f1,LOW); 
          digitalWrite(g1,LOW); 

        break;
        case 67:
          digitalWrite(a,HIGH);  
          digitalWrite(b,LOW);  
          digitalWrite(c,HIGH); 
          digitalWrite(d,HIGH); 
          digitalWrite(e,HIGH); 
          digitalWrite(f,HIGH); 
          digitalWrite(g,HIGH); 

          digitalWrite(a1,HIGH); 
          digitalWrite(b1,HIGH); 
          digitalWrite(c1,HIGH); 
          digitalWrite(d1,LOW); 
          digitalWrite(e1,LOW); 
          digitalWrite(f1,LOW); 
          digitalWrite(g1,LOW); 
        break;
        case 71:
          digitalWrite(a,HIGH);  
          digitalWrite(b,HIGH);  
          digitalWrite(c,HIGH); 
          digitalWrite(d,LOW); 
          digitalWrite(e,LOW); 
          digitalWrite(f,LOW); 
          digitalWrite(g,LOW); 

          digitalWrite(a1,LOW); 
          digitalWrite(b1,HIGH); 
          digitalWrite(c1,HIGH); 
          digitalWrite(d1,LOW); 
          digitalWrite(e1,LOW); 
          digitalWrite(f1,LOW); 
          digitalWrite(g1,LOW);
        break;
        case 73:
          digitalWrite(a,HIGH);  
          digitalWrite(b,HIGH);  
          digitalWrite(c,HIGH); 
          digitalWrite(d,LOW); 
          digitalWrite(e,LOW); 
          digitalWrite(f,LOW); 
          digitalWrite(g,LOW); 

          digitalWrite(a1,HIGH); 
          digitalWrite(b1,HIGH); 
          digitalWrite(c1,HIGH); 
          digitalWrite(d1,HIGH); 
          digitalWrite(e1,LOW); 
          digitalWrite(f1,LOW); 
          digitalWrite(g1,HIGH); 
        break;
        case 79:
          digitalWrite(a,HIGH);  
          digitalWrite(b,HIGH);  
          digitalWrite(c,HIGH); 
          digitalWrite(d,LOW); 
          digitalWrite(e,LOW); 
          digitalWrite(f,LOW); 
          digitalWrite(g,LOW); 

          digitalWrite(a1,HIGH); 
          digitalWrite(b1,HIGH); 
          digitalWrite(c1,HIGH); 
          digitalWrite(d1,HIGH); 
          digitalWrite(e1,LOW); 
          digitalWrite(f1,HIGH); 
          digitalWrite(g1,HIGH);
        break;
        case 83:
          digitalWrite(a,HIGH);  
          digitalWrite(b,HIGH);  
          digitalWrite(c,HIGH); 
          digitalWrite(d,HIGH); 
          digitalWrite(e,HIGH); 
          digitalWrite(f,HIGH); 
          digitalWrite(g,HIGH); 

          digitalWrite(a1,HIGH); 
          digitalWrite(b1,HIGH); 
          digitalWrite(c1,HIGH); 
          digitalWrite(d1,HIGH); 
          digitalWrite(e1,LOW); 
          digitalWrite(f1,LOW); 
          digitalWrite(g1,HIGH); 
        break;
        case 89:
          digitalWrite(a,HIGH);  
          digitalWrite(b,HIGH);  
          digitalWrite(c,HIGH); 
          digitalWrite(d,HIGH); 
          digitalWrite(e,HIGH); 
          digitalWrite(f,HIGH); 
          digitalWrite(g,HIGH); 

          digitalWrite(a1,HIGH); 
          digitalWrite(b1,HIGH); 
          digitalWrite(c1,HIGH); 
          digitalWrite(d1,HIGH); 
          digitalWrite(e1,LOW); 
          digitalWrite(f1,HIGH); 
          digitalWrite(g1,HIGH);
          break;
          case 97:
          digitalWrite(a,HIGH);  
          digitalWrite(b,HIGH);  
          digitalWrite(c,HIGH); 
          digitalWrite(d,HIGH); 
          digitalWrite(e,LOW); 
          digitalWrite(f,HIGH); 
          digitalWrite(g,HIGH); 

          digitalWrite(a1,HIGH); 
          digitalWrite(b1,HIGH); 
          digitalWrite(c1,HIGH); 
          digitalWrite(d1,LOW); 
          digitalWrite(e1,LOW); 
          digitalWrite(f1,LOW); 
          digitalWrite(g1,LOW);
          break;
      }
    }
    }
      
    


