#include<Servo.h>
#include<Wire.h>
#include<Math.h>

char x;
int incoming[2];
Servo s1;
Servo s2;
Servo s3;
Servo s4;
Servo s5;
Servo s6;

int p1=90;
int p2=160;
int p3=90;
int p4=160;
int p5=90;
int p6=90;


void setup() {
  // put your setup code here, to run once:
  Wire.begin(9600);
  Serial.begin(9600);

  s1.attach(3);
  s2.attach(5);
  s3.attach(6);
  s4.attach(9);
  s5.attach(10);
  s6.attach(11);

  s1.write(p1);
  s2.write(p2);
  s3.write(p3);
  s4.write(p4);
  s5.write(p5);
  s6.write(p6);
  
 
}
void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available()>=1)
{
  incoming[0]=Serial.read();
  //Serial.write(x);
  //Serial.println("pin");
  x=incoming[0];
  Serial.println(x);
  switch(x)
  {
      case 'l':
      s1.write(170);
      Serial.print("done");
      break;
      case 'r':
      s1.write(0);
      Serial.print("done");
      break;
      case 'u':
      s2.write(130);
      s3.write(60);
      s4.write(160);
      Serial.print("done"); 
      break;
      case 'd':
      s2.write(160);
      s3.write(90);
      s4.write(160);
      Serial.print("done");
      break;
      case 'o':
      s6.write(90);
      Serial.print("done");
      break;
      case 'c':
      s6.write(150);
      Serial.print("done");
      break;
      case 'w':
      s4.write(140);
      Serial.print("done");
      break;
      case 's':
      s4.write(180);
      Serial.print("done");
      break;
      case 'f':
      s2.write(60);
      s3.write(60);
      s4.write(90); 
      Serial.print("done");
      break;
      case 'b':
      s2.write(160);
      s3.write(90);
      s4.write(160);
      Serial.print("done");
      break;
      case 'n':
      s5.write(0);
      Serial.print("done");
      break;
      case 'm':
      s5.write(180);
      Serial.print("done");
      break;
      case 'h':
      s5.write(90);
      Serial.print("done");
      delay(200);
      s5.write(0);
      delay(200);
      s5.write(180);
      delay(200);
      s5.write(90);
      delay(200);
      s6.write(90);
      delay(200);
      s6.write(150);
      delay(200);
      s6.write(90);
      break;
      case 'i':
      s1.write(90);
      s2.write(160);
      s3.write(90);
      s4.write(160);
      s5.write(90);
      s6.write(90);
      Serial.print("done");
      break;
  }
  }
}

