// C++ code
//
int sensor_solo = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  sensor_solo = analogRead(A0);
  Serial.println(sensor_solo);
  if (sensor_solo < 100) {
    digitalWrite(8, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
  } else {
    digitalWrite(8, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(6, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}