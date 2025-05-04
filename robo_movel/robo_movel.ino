char t;
 
void setup() {
pinMode(4,OUTPUT);   //motor izquierdo delantero
pinMode(5,OUTPUT);   //motor izquierdo trasero
pinMode(6,OUTPUT);   //motor derecho delantero
pinMode(7,OUTPUT);   //motor derecho trasero
Serial.begin(9600);
}
 

 
void frente(int tempo)
{            //mover hacia adelante
  digitalWrite(4,HIGH);
  digitalWrite(6,HIGH);
  delay(tempo);
  digitalWrite(4,LOW);
  digitalWrite(6,LOW);
}
void teste(int tempo)
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(tempo);
  digitalWrite(LED_BUILTIN, LOW);
  delay(tempo);

}
 
void re(int tempo)
{      //mover hacia atras
  digitalWrite(5,HIGH);
  digitalWrite(7,HIGH);
  delay(tempo);
  digitalWrite(5,HIGH);
  digitalWrite(7,HIGH);
}
 
void direita(int tempo)
{      //girar a la derecha 
  digitalWrite(6,HIGH);
  delay(tempo);
  digitalWrite(6,LOW);
}
 
 
void para(int tempo)
{      //STOP 
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  delay(tempo);
}
void loop() 
{
  digitalWrite(4,HIGH);
  digitalWrite(6,HIGH);
}