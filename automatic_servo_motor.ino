#include<Servo.h>
Servo myservo;
int val, ServoPin=9, angle=0;

void setup()
{
  Serial.begin(9600);
  myservo.attach(ServoPin);

}
void loop(){
 myservo.write(0);
 delay(100);
 myservo.write(60);
 delay(100);
 myservo.write(90);
 delay(100);
 myservo.write(120);
 delay(100);
 myservo.write(180);
 delay(100);
}
