int ledPin = 2;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0) {
    String receivedString = "";

    while(Serial.available() > 0) {
      receivedString += char(Serial.read());
    }

    if(receivedString == "1") {
      digitalWrite(ledPin, HIGH);
    }
    else {
      digitalWrite(ledPin, LOW);
    }
  }
}