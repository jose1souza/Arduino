void setup()
{
  pinMode(11, OUTPUT);
}
 
void loop()
{
  //Acende o led
  digitalWrite(11, HIGH);
   
  //Aguarda intervalo de tempo em milissegundos
  delay(1000);
   
  //Apaga o led
  digitalWrite(11, LOW);
   
  //Aguarda intervalo de tempo em milissegundos
  delay(1000);
}
