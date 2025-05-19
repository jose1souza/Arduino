int tempSensor = A1; 
int valorTemp = 0;

void setup() {
    pinMode(led, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    valorTemp = analogRead(tempSensor);
    Serial.println(valorTemp);
    if (valorTemp > 600) {
        digitalWrite(led, HIGH);
    } else {
        digitalWrite(led, LOW);
    }
}
