// C++ code
//

int ledRC = 12;
int ledYC = 11;
int ledGC = 10;

int ledRP = 7;
int ledGP = 6;

void setup()
{
  pinMode(ledRC, OUTPUT);
  pinMode(ledYC, OUTPUT);
  pinMode(ledGC, OUTPUT);
  
  pinMode(ledRP, OUTPUT);
  pinMode(ledGP, OUTPUT);
}

void loop()
{
  digitalWrite(ledRC, HIGH);
  digitalWrite(ledGP, HIGH);  
  
  digitalWrite(ledYC, LOW);
  digitalWrite(ledGC, LOW);
  digitalWrite(ledRP, LOW);
  delay(5000);
  
  digitalWrite(ledYC, HIGH);
  digitalWrite(ledRP, HIGH);
  
  digitalWrite(ledRC, LOW);
  digitalWrite(ledGC, LOW);
  digitalWrite(ledGP, LOW);
  delay(2000);
  
  digitalWrite(ledGC, HIGH);
  digitalWrite(ledRP, HIGH);
  
  digitalWrite(ledRC, LOW);
  digitalWrite(ledYC, LOW);
  digitalWrite(ledGP, LOW);
  delay(5000);
}
