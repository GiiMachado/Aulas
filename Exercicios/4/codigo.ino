int button = 5;
int led = 9;
int lastButtonState = 0;
int buttonState = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}
void loop() {
  buttonState = digitalRead(button);
    if (buttonState != lastButtonState) {
        if (buttonState == HIGH) {
       
          digitalWrite(led, HIGH);
        } else {
          digitalWrite(led, LOW);
        }
        delay(5);
        }
    }
    

