int sensorValue = 0;//Se asigna valor cero a la variable sensorValue además de definir que es 0.

int outputValue = 0;//Se asigna valor cero a la variable outputValue además de definir que es 0

void setup()
{
  pinMode(A0, INPUT);//El pin A0 es entrada.
  pinMode(9, OUTPUT);// El pin 9 es salida 
  Serial.begin(9600);//Se establece la velocidad de datos en 9600 bits por segundo.
}
void loop()
{

  sensorValue = analogRead(A0);// Leer el potenciómetro a través del pin A0 de manera analoga.
  outputValue = map(sensorValue, 0, 1023, 0, 255);//Se asigna el rango de la salida analógica es decir 0V-0 y 1023 -255.
  analogWrite(9, outputValue);//Se define la salida el pin 9 a través de la lectura del potenciómetro.
  Serial.print("sensor = ");
  Serial.print(sensorValue);//Se imprimen en pantalla los resultados: Sensor: Valor de lectura del análogo potenciómetro (valor entre 0-1023


  Serial.print("\t output = ");
  Serial.println(outputValue);// Se imprimen en pantalla los resultados:Salida: Valor de salida digital. 



  delay(2); //Se espera 2 milisegundos antes del siguiente ciclo para convertir el valor  de analógico al digital para que el ciclo se vuelva a ejecutar.
}
