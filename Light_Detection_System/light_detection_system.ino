//Using a photoresistor to light an LED
//Photoresistor Light Alarm Detection System!!

const int photoResistor = A0;    // Photoresistor connected at analog pin A1
const int ledPin=8;              // LED connected connected at Arduino pin 9

//Variables
int value;				                   // Store value from photoresistor (between a certain range of values)

void setup(){
 pinMode(ledPin, OUTPUT);        // Setting lepPin - 8 pin as an OUTPUT PIN
 pinMode(photoResistor, INPUT);  // Setting pResistor - A1 pin as an INPUT PIN
}

void loop(){
  value = analogRead(photoResistor);
  //threshold value is at a 50
  if (value > 800){
    digitalWrite(ledPin, LOW);   //LED OFF
  }
  else{
    digitalWrite(ledPin, HIGH);  //LED ON
  }

  delay(400);                    //DELAYING IT
}
