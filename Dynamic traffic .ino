#include <toneAC.h>
#include <Talkie.h>

int g1=7;//green
int r1=6;//red

int r2=8;//red
int g2=9;//green

int g3=11;//green
int r3=10;//red

int r4=12;//red
int g4=13;//green

int ir1=2;//sensor 1
int ir2=3;//sensor 2
int ir3=4;//sensor 3
int ir4=5;//sensor 4

void setup() 

{
  
Serial.begin(9600);
 
pinMode(g1,OUTPUT);
pinMode(r1,OUTPUT);
pinMode(g2,OUTPUT);
pinMode(r2,OUTPUT);
pinMode(g3,OUTPUT);
pinMode(r3,OUTPUT);
pinMode(g4,OUTPUT);
pinMode(r4,OUTPUT);

pinMode(ir1,INPUT);
pinMode(ir2,INPUT);
pinMode(ir3,INPUT);
pinMode(ir4,INPUT);

   
}

void loop() 

{
  int irsensor1=digitalRead(ir1);
    int irsensor2=digitalRead(ir2);
      int irsensor3=digitalRead(ir3);
        int irsensor4=digitalRead(ir4);

  if (irsensor1==0)
  {
    digitalWrite(g1,1);//green
    digitalWrite(g2,1);//green

    digitalWrite(r3,1);//red
    digitalWrite(r4,1);//red
  }
    if (irsensor2==0)
  {
    digitalWrite(g3,1);//green
    digitalWrite(g2,1);//green

    digitalWrite(r1,1);//red
    digitalWrite(r4,1);//red
  }

   if(irsensor3==0)
  {
    digitalWrite(g4,1);//green
    digitalWrite(g3,1);//green
    
    digitalWrite(r1,1);//red
    digitalWrite(r2,1);//red
    
  }

    if(irsensor4==0)
  {
    digitalWrite(g1,1);//green
    digitalWrite(g4,1);//green
    
    digitalWrite(r3,1);//red
    digitalWrite(r2,1);//red
    
  }
  else 
  {
    digitalWrite(g1,0);//green
    digitalWrite(g2,0);//green
    digitalWrite(g3,0);//green
    digitalWrite(g4,0);//green
    
    digitalWrite(r1,0);//red
    digitalWrite(r2,0);//red
    digitalWrite(r3,0);//red
    digitalWrite(r4,0);//red
  }
  
   if((irsensor1==0)&&(irsensor2==0)) 
  {
    signal1();
  }
  if((irsensor2==0)&&(irsensor3==0)) 
  {
    signal2();
  }
  if((irsensor3==0)&&(irsensor4==0)) 
  {
    signal3();
  }
   if((irsensor1==0)&&(irsensor4==0)) 
  {
    signal4();
  }
  if((irsensor1==0)&&(irsensor3==0)) 
  {
    signal5();
  }
  if((irsensor2==0)&&(irsensor4==0)) 
  {
    signal6();
  }
}
void signal1()
{
    digitalWrite(g1,0);//green
    digitalWrite(g2,1);//green
    digitalWrite(g3,0);//green
    digitalWrite(g4,0);//green
    
    digitalWrite(r1,1);//red
    digitalWrite(r2,0);//red
    digitalWrite(r3,1);//red
    digitalWrite(r4,1);//red
    delay(5000);
    
    digitalWrite(g1,0);//green
    digitalWrite(g2,0);//green
    digitalWrite(g3,1);//green
    digitalWrite(g4,0);//green
    
    digitalWrite(r1,1);//red
    digitalWrite(r2,1);//red
    digitalWrite(r3,0);//red
    digitalWrite(r4,1);//red
    delay(5000);
    
}

void signal2()
{
    digitalWrite(g1,0);//green
    digitalWrite(g2,0);//green
    digitalWrite(g3,0);//green
    digitalWrite(g4,1);//green
    
    digitalWrite(r1,1);//red
    digitalWrite(r2,1);//red
    digitalWrite(r3,1);//red
    digitalWrite(r4,0);//red
    delay(5000);
    
    digitalWrite(g1,0);//green
    digitalWrite(g2,0);//green
    digitalWrite(g3,1);//green
    digitalWrite(g4,0);//green
    
    digitalWrite(r1,1);//red
    digitalWrite(r2,1);//red
    digitalWrite(r3,0);//red
    digitalWrite(r4,1);//red
    delay(5000);
    
}

void signal3()
{
    digitalWrite(g1,0);//green
    digitalWrite(g2,0);//green
    digitalWrite(g3,1);//green
    digitalWrite(g4,0);//green
    
    digitalWrite(r1,1);//red
    digitalWrite(r2,1);//red
    digitalWrite(r3,0);//red
    digitalWrite(r4,1);//red
    delay(5000);
    
    digitalWrite(g1,0);//green
    digitalWrite(g2,0);//green
    digitalWrite(g3,0);//green
    digitalWrite(g4,1);//green
    
    digitalWrite(r1,1);//red
    digitalWrite(r2,1);//red
    digitalWrite(r3,1);//red
    digitalWrite(r4,0);//red
    delay(5000);
    
}

void signal4()
{
    digitalWrite(g1,1);//green
    digitalWrite(g2,0);//green
    digitalWrite(g3,0);//green
    digitalWrite(g4,0);//green
    
    digitalWrite(r1,0);//red
    digitalWrite(r2,1);//red
    digitalWrite(r3,1);//red
    digitalWrite(r4,1);//red
    delay(5000);
    
    digitalWrite(g1,0);//green
    digitalWrite(g2,1);//green
    digitalWrite(g3,0);//green
    digitalWrite(g4,0);//green
    
    digitalWrite(r1,1);//red
    digitalWrite(r2,0);//red
    digitalWrite(r3,1);//red
    digitalWrite(r4,1);//red
    delay(5000);
    
}

void signal5()
{
    digitalWrite(g1,0);//green
    digitalWrite(g2,1);//green
    digitalWrite(g3,0);//green
    digitalWrite(g4,0);//green
    
    digitalWrite(r1,1);//red
    digitalWrite(r2,0);//red
    digitalWrite(r3,1);//red
    digitalWrite(r4,1);//red
    delay(5000);
    
    digitalWrite(g1,0);//green
    digitalWrite(g2,0);//green
    digitalWrite(g3,0);//green
    digitalWrite(g4,1);//green
    
    digitalWrite(r1,1);//red
    digitalWrite(r2,1);//red
    digitalWrite(r3,1);//red
    digitalWrite(r4,0);//red
    delay(5000);
    
}

void signal6()
{
    digitalWrite(g1,1);//green
    digitalWrite(g2,0);//green
    digitalWrite(g3,0);//green
    digitalWrite(g4,0);//green
    
    digitalWrite(r1,0);//red
    digitalWrite(r2,1);//red
    digitalWrite(r3,1);//red
    digitalWrite(r4,1);//red
    delay(5000);
    
    digitalWrite(g1,0);//green
    digitalWrite(g2,0);//green
    digitalWrite(g3,1);//green
    digitalWrite(g4,0);//green
    
    digitalWrite(r1,1);//red
    digitalWrite(r2,1);//red
    digitalWrite(r3,0);//red
    digitalWrite(r4,1);//red
    delay(5000);
    
}
