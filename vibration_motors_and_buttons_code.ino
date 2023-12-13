#define vib1 1
#define vib2 2
#define vib3 3

#define button1 8
#define button2 9
#define button3 10


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);

  pinMode(vib1, OUTPUT);
  digitalWrite(vib1, LOW);
  pinMode(vib2, OUTPUT);
  digitalWrite(vib2, LOW);
  pinMode(vib3, OUTPUT);
  digitalWrite(vib3, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (digitalRead(button1) == LOW) {
    digitalWrite(vib1, HIGH);
  }
  while (digitalRead(button2) == LOW) {
    digitalWrite(vib2, HIGH);
  }
  while (digitalRead(button3) == LOW) {
    digitalWrite(vib3, HIGH);
  }
}
