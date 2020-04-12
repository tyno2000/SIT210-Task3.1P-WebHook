int led = D7;

void setup() {
    pinMode(led, OUTPUT);
}

void loop() {
    digitalWrite(led,HIGH);
    
    String temp = String(random(20, 40));
    Particle.publish("temp", temp, PRIVATE);
    delay(30000);
    
    digitalWrite(led, LOW);
    delay(30000);
}