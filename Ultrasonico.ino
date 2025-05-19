int trigger = 7;
int echo = 6;
long duration;
int distance;

void setup() {
    pinMode(trigger, OUTPUT);
    pinMode(echo, INPUT);
    pinMode(led, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    digitalWrite(trigger, LOW);
    delayMicroseconds(2);
    digitalWrite(trigger, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigger, LOW);

    duration = pulseIn(echo, HIGH);
    distance = duration * 0.034 / 2; // Conversão para cm
    Serial.println(distance);

    if (distance < 20) {
        digitalWrite(led, HIGH);
    } else {
        digitalWrite(led, LOW);
    }
}
