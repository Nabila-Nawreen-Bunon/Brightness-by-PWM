// C++ code
//
int p=11, brightness=0,fadePoint=5;

void setup()
{
 pinMode(p,OUTPUT);
}

void loop()
{
 analogWrite(p,brightness);
  brightness=brightness+fadePoint;
  
  if(brightness<=0||brightness>=255){
    fadePoint=-fadePoint;
  }
  delay(30);
}