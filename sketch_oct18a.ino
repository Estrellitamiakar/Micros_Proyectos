/*  Univerdidad Tecnica Del Norte
          FICA-CIERCOM
          Karla Moncayo
          18/10/2016
         3 Juegos de luces 
 */

int leds [13]={1,2,3,4,5,6,7,8,9,10,11,12,13}; //declaracion de vector
int contador=0;
int contador_1=0;
int contador_2=0;
int dato;
void setup() {
 
pinMode(1,OUTPUT); //declarar pin como salida
pinMode(2,OUTPUT); 
pinMode(3,OUTPUT); //declarar pin como salida
pinMode(4,OUTPUT); 
pinMode(5,OUTPUT); //declarar pin como salida
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT); //declarar pin como salida
pinMode(9,OUTPUT); 
pinMode(10,OUTPUT); //declarar pin como salida
pinMode(11,OUTPUT); 
pinMode(12,OUTPUT); //declarar pin como salida
pinMode(13,OUTPUT); 

}

void loop() {
  // put your main code here, to run repeatedly:
 luces();
 delay(300);
 luces_1();
 delay(300);
 luces_2();
 delay(300);
}

void luces(){
   for(;contador<13;contador++){
      digitalWrite(leds[contador],HIGH);
      delay(300);
      digitalWrite(leds[contador],LOW);
    }
    for(;contador>=0;contador--){
      digitalWrite(leds[contador],HIGH);
      delay(300);
      digitalWrite(leds[contador],LOW);
    }
    contador=0;
  }
  void luces_1 (){
  for(;contador_1<14;contador_1++){             
  digitalWrite(leds[contador_1],HIGH);       
  delay(150);                             
  digitalWrite(leds[contador_1],LOW);       
    delay(150);                           
  contador_1=contador_1+1;                    
  }                                 
    for(14;contador_1>=0;contador_1--){      
    digitalWrite(leds[contador_1],HIGH);    
  delay(150);                            
  digitalWrite(leds[contador_1],LOW);      
    delay(150);                          
  contador_1=contador_1-1;                
  }
}
 void luces_2(){
   for(contador_2=7;contador_2<=13;contador_2++){    //ciclo para el desplazamiento desde la posicion 7 a la izquierda
   digitalWrite(leds[contador_2],HIGH);              //condicion para que encienda el led en la posicion del vector
   delay(200);    //retardo
   }
 
   for(contador_2=6;contador_2<=6;contador_2--){    //ciclo para el desplazamiento desde la posicion 6 a la derecha
   digitalWrite(leds[contador_2],HIGH);              //condicion para que encienda el led en la posicion del vector
   delay(200);
   }
   
  }
  
  
   
