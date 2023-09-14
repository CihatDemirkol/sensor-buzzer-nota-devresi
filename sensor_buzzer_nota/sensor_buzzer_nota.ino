int echoPin= 6;
int trigPin= 7;
int buzzerPin=8;
long duration,distance;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(echoPin,INPUT);
 pinMode(trigPin,OUTPUT);
 pinMode(buzzerPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin,LOW);
duration=pulseIn(echoPin,HIGH);
  distance=(duration/2)/29.1;
  
Serial.println(distance);
if(distance<=6 && distance>2)
{
  tone(buzzerPin,262);
  //delay(500);
  
  
}

if(distance<=8 && distance>6)
{
  tone(buzzerPin,294);
  
}

if(distance<=11 && distance>8)
{
  tone(buzzerPin,330);
 
}

if(distance<=14 && distance>11)
{
  tone(buzzerPin,349);
  
}

if(distance<=17 && distance>14)
{
  tone(buzzerPin,392);
 
}

if(distance<=19 && distance>17)
{
  tone(buzzerPin,440);
  
}

if(distance<=22 && distance>19)
{
  tone(buzzerPin,494);
 
}

if(distance<=25 && distance>22)
{
  tone(buzzerPin,523);
  
}

if(distance>26 || distance<1)
  {
    noTone(buzzerPin);
  }

}//--
