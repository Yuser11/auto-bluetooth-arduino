char t;
 
void setup() {
pinMode(13,OUTPUT);   //motor izquierdo delantero
pinMode(12,OUTPUT);   //motor izquierdo trasero
pinMode(11,OUTPUT);   //motor derecho delantero
pinMode(10,OUTPUT);   //motor derecho trasero
Serial.begin(9600);
}
 

 
void frente(int tempo)
{            //mover hacia adelante
  digitalWrite(13,HIGH);
  digitalWrite(11,HIGH);
  delay(tempo)
}
void teste(int tempo)
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(tempo)
  digitalWrite(LED_BUILTIN, LOW);

}
 
void re(int tempo)
{      //mover hacia atras
  digitalWrite(12,HIGH);
  digitalWrite(10,HIGH);
  delay(tempo)
}
 
void direita(int tempo)
{      //girar a la derecha 
  digitalWrite(11,HIGH);
  delay(tempo)
}
 
void frente(int tempo)
{      //girar a la izquierda 
  digitalWrite(13,HIGH);
  delay(tempo)
}
 
void para(int tempo)
{      //STOP 
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  delay(tempo)
}
void loop() 
{
teste(1000  )
}