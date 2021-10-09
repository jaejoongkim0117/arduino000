void setup() {
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}
 int cnt = 0;
  boolean check = true;
  
void loop() {
 int btnState = digitalRead(2);
  if (btnState == 1) {
    if (check) {
      check = false;
      cnt += 1;
      if (cnt == 1) {
        digitalWrite(13, 1);
      } else if (cnt == 2) {
        digitalWrite(13, 0);
        cnt = 0;
      }
    }

  }
  else if(btnState == 0){
    check = true;
  }
}
