


int val0 = 0;
int val1 = 0;
int val2 = 0;
int val3 = 0;


void setup() 
{   //display   
  for (int i = 2; i < 14; i++)
    {
      pinMode(i, OUTPUT);
    }
    //dips
     for (int i = 1; i < 2; i++)
    {
       pinMode(i, INPUT);
    }
}

void loop()
{
  val0 = digitalRead(10);
    val1 = digitalRead(11);
    val2 = digitalRead(12);
    val3 = digitalRead(13);
    clear();
    if (val0 == LOW && val1 == LOW && val2 == LOW && val3 == LOW)
    {
      disp0();
    }
    if (val0 == HIGH && val1 == LOW && val2 ==LOW && val3 == LOW)
    {
      disp1();
    }
    if (val0 == LOW && val1 == HIGH && val2 == LOW && val3 == LOW)
    {
      disp2();
    }
    if (val0 == LOW && val1 == LOW && val2 == HIGH && val3 ==LOW )
    {
      disp3();
    }
    if (val0 == LOW && val1 == LOW && val2 == LOW && val3 == HIGH)
    {
      disp4();
    }
    if (val0 == LOW && val1 == LOW && val2 == HIGH && val3 == HIGH)
    {
      disp5();
    }
    if (val0 == LOW && val1 == HIGH && val2 == HIGH && val3 == HIGH)
    {
      disp6();
    }
    if (val0 == HIGH && val1 == HIGH && val2 == HIGH && val3 == HIGH)
    {
      disp7();
    }
    if (val0 == HIGH && val1 == LOW && val2 == LOW && val3 == HIGH)
    {
      disp8();
    }
    if (val0 == HIGH && val1 == HIGH && val2 == LOW && val3 == LOW)
    {
      disp9();
    }
    
    
}

void clear()
{ 
  for (int i = 2; i < 14; i++)
  {
    digitalWrite(i,LOW);
  }
}
void disp0()
{
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(8,HIGH);
}
void disp1()
{
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
}
void disp2()
{
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
}
void disp3()
{
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(9,HIGH);
}
void disp4()
{
  digitalWrite(9,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(8,HIGH);
}
void disp5()
{
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(2,HIGH);
}
void disp6()
{
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(2,HIGH);
}
void disp7()
{
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
}
void disp8()
{
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
}
void disp9()
{
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
}
