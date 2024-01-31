#define ledr 7
#define ledg 9
#define ledY 8
#define voice1 10
#define voice2 5

#define buz 6

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledr,OUTPUT);
pinMode(ledg,OUTPUT);
pinMode(ledY,OUTPUT);
pinMode(buz,OUTPUT);
pinMode(voice1,OUTPUT);
pinMode(voice2,OUTPUT);

}

void loop() 
{
digitalWrite(voice2, 1);
digitalWrite(voice1, 1);
delay(1000);
digitalWrite(ledr, 1);
digitalWrite(buz,HIGH);
digitalWrite(voice1, 0);
delay(2000);
digitalWrite(voice1, 1);
digitalWrite(buz,LOW);
digitalWrite(ledr, 0);
delay(2000);
digitalWrite(ledY, 1);
delay(2000);
digitalWrite(ledY, 0);
delay(2000);
 
digitalWrite(ledg, 1);
digitalWrite(voice2, 0);
delay(1000);
digitalWrite(voice2, 1);
digitalWrite(ledg, 0);
delay(3000);
}
