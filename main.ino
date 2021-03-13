
char c;
String calle = "-M921gcjh1jA_xFt5_T9";

void setup() 
{ 
  Serial.begin(9600);
  conectarWiFi();  
  iniciarRFID();
}
// ------------------------------------------------------------------
void printHex(byte *buffer, byte bufferSize) {
  for (byte i = 0; i < bufferSize; i++) {
    Serial.print(buffer[i] < 0x10 ? " 0" : " ");
    Serial.print(buffer[i], HEX);
  }
}
void printDec(byte *buffer, byte bufferSize) {
  for (byte i = 0; i < bufferSize; i++) {
    Serial.print(buffer[i] < 0x10 ? " 0" : " ");
    Serial.print(buffer[i], DEC);
  }
}
//------------------------------------------------------------------

void loop() {
  /*
  Serial.println("");
  Serial.println("1. Escribir");
  Serial.println("2. Leer");
  while(!Serial.available()){}
  c=Serial.read();
  switch(c)
  {
    case '1':
    Escribir();
    break;
    case '2':*/
    Leer();
  /*  break;
  }*/
}
