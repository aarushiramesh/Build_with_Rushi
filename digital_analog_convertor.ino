//Digital to Analog Convertor Testing
//For a 4-bit DAC Circuit.

//setting the timer for the delay
int timer = 100;

void setup() {
    //set the Digital Pins D2 tao D6
    for(int thisPin = 2; thisPin < 6; thisPin++){
      pinMode(thisPin, OUTPUT);
    }
    Serial.begin(9600);
}

void loop() {
    //turn the pins on
    for(int thisPin = 2; thisPin < 6; thisPin++){
      digitalWrite(thisPin, HIGH);
      delay(timer);
    }
    
    int sensorValue = analogRead(A0);
    // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
    float voltage = sensorValue * (5.0 / 1023.0);
    // print out the analog voltage value we read
    Serial.println(voltage);
    
    //turn the pins off
    for (int thisPin = 5; thisPin >= 2; thisPin--) {
      digitalWrite(thisPin, LOW);
      delay(timer);
    }
    
}
