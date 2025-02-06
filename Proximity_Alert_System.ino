#define TRIG_PIN 9
#define ECHO_PIN 10
#define LED_PIN 7
#define BUZZER_PIN 8

void setup() {
    Serial.begin(115200);
    pinMode(TRIG_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);
    pinMode(LED_PIN, OUTPUT);
    pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
    digitalWrite(TRIG_PIN, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIG_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN, LOW);

    long duration = pulseIn(ECHO_PIN, HIGH);
    int distance = duration * 0.034 / 2;

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");

    if (distance > 0 && distance < 15) { // If object is closer than 15 cm
        digitalWrite(LED_PIN, HIGH);
        tone(BUZZER_PIN, 1000); // Buzzer ON
    } else {
        digitalWrite(LED_PIN, LOW);
        noTone(BUZZER_PIN); // Buzzer OFF
    }

    delay(500);
}
