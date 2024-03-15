
#define sensor A0 

void setup() {
  Serial.begin(115200);
}

void loop() {
  
  //converting the 10-bit ADC (Analog-to-Digital Converter) reading (0-1023) to a voltage value (0-5V)
  float volts = analogRead(sensor)*0.0048828125;  // value from sensor * (5/1024)
  int distance = 13*pow(volts, -1); // worked out from datasheet graph
  delay(1000); // slow down serial port 
  
  if (distance <= 30){
    Serial.println(distance); 
  }
}
//Sharp IR GP2Y0A41SK0F analog distance sensor 4-30cm
