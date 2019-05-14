int destDeg = 0, refDeg = 0;
int kp = 1, kd = 1;
int error, lastErr, mtrSpd;
void setup() {
  Serial.begin(9600);

}

void loop() {
  refDeg = bacaRotary();                              //baca rotary degree
  error = destDeg - refDeg;                           //hitung error
  mtrSpd = (kp * error) + ((error - lastErr) * kd);   //kalkulasi pd
  setSpd(mtrSpd);                                     //set aktuator
  lastErr = error;                                    //simpan nilai sebelum
}

void serialEvent() {
  //baca nilai sudut dari serial
  while (Serial.available()) {
    int destDeg = Serial.parseInt();
    Serial.println(destDeg);
  }
}
void setSpd(int pwmPulse)
{
  //set aktuator motor
  //analogWrite(pwmPin, pwmPulse);
}
int bacaRotary()
{
  //kode konversi rotary
  int derajat = 0;
  return derajat;
}

