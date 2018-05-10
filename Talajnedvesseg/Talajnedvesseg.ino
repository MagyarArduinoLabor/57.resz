/*
57. rész - A talajnedvesség mérés

Magyar Arduino Labor, 2018.04.24.

*/

int szenzor = A0;  
int ertek = 0;  
int szazalek = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  
  ertek = analogRead(szenzor);
  szazalek = map(ertek, 1023, 300, 0, 100);
  
  Serial.print("Analog ertek: ");
  Serial.println(ertek);
  Serial.print("Szazalek ertek: ");
  Serial.print(szazalek);
  Serial.println("%");
  
  delay(1000);
}


