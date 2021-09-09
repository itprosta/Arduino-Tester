#define LedRed 2
#define LedGreen 3
#define LedBlue 4

int analogValue = 0;
float voltage = 0;
int ledDelay = 2000;

void setup() {
  Serial.begin(9600);
  pinMode(LedRed, OUTPUT);
  pinMode(LedBlue, OUTPUT);
  pinMode(LedGreen, OUTPUT);
}

void loop() {
  analogValue = analogRead(0);
  voltage = 0.0048 * analogValue;
  Serial.println(voltage);
    
  if (voltage >= 1.55){
    digitalWrite(LedGreen, HIGH);
    delay(ledDelay);
    digitalWrite(LedGreen,  LOW);
    }

  else if (voltage < 1.55 && voltage > 1.4){
    digitalWrite(LedBlue, HIGH);
    delay(ledDelay);
    digitalWrite(LedBlue, LOW);
    }

  else if (voltage <= 1.4){
    digitalWrite(LedRed, HIGH);
    delay(ledDelay);
    digitalWrite(LedRed, LOW);
    }
}
