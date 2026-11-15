int trig = 9;
int echo = 10;
long duration;
float distance;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);

  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);

  duration = pulseIn(echo, HIGH);

  distance = duration/58;

  Serial.print("Distance is  ");
  Serial.print(distance);
  Serial.println("CM");
  delay(500);
  // put your main code here, to run repeatedly:

}
