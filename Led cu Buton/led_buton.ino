const int ledPin=11;
const int buttonPin=7;

int buttonState;
int lastButtonState=LOW;
int press=0;
void setup() {

    pinMode(ledPin,OUTPUT);
    pinMode(buttonPin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
    buttonState=digitalRead(buttonPin);
    if(buttonState == HIGH && lastButtonState == LOW) {
      
      press++;
      if(press>4)
      {
        press=1;
      }
    
      switch (press){
        case 1:
          analogWrite(ledPin,55);
          break;
        case 2:
          analogWrite(ledPin,120);
          break;
        case 3:
          analogWrite(ledPin,255);
          break;
        case 4:
          analogWrite(ledPin,0);
          break;
      }
      
    }
    lastButtonState=buttonState;
}
