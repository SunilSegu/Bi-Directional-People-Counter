int US1_trig = 5;
int US1_echo = 6;
int US2_trig = 8;
int US2_echo = 9;
int ir = 10;
long dur1,dur2;
int dis1,dis2;
int IR;
int X,Y,Z;
int Sum = 0;
void S1(int , int , int );
void S2(int , int , int );
void S3(int , int , int );
void S4(int , int , int );
void S5(int , int , int );
void S6(int , int , int );
void setup() {
  pinMode(ir,INPUT);
  pinMode(US1_trig, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(US1_echo, INPUT); // Sets the echoPin as an INPUT
  pinMode(US2_trig, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(US2_echo, INPUT); // Sets the echoPin as an INPUT
  Serial.begin(9600); // // Serial Communication is starting with 9600 of baudrate speed

}

void loop() {
  digitalWrite(US1_trig,0);
  delayMicroseconds(2);
  digitalWrite(US1_trig,1);
  delayMicroseconds(10);
  digitalWrite(US1_trig,0);
  dur1 = pulseIn(US2_echo,1);
  dis1 = dur1 * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  digitalWrite(US2_trig,0);
  delayMicroseconds(2);
  digitalWrite(US2_trig,1);
  delayMicroseconds(10);
  digitalWrite(US2_trig,0);
  dur2 = pulseIn(US2_echo,1);
  dis2 = dur2 * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  Y = digitalRead(ir);
  X = dis1<10?1:0;
  Z = dis2<10?1:0;
  if(X == 1 && Y == 0 && Z == 0)
  S1(X,Y,Z);
  else if(X == 0 && Y == 0 && Z == 1)
  S3(X,Y,Z);
  else if(X == 1 && Y == 0 && Z == 1)
  S6(X,Y,Z);
  Serial.print("Number of persons inside = ");
  Serial.println(Sum);
}

void S1(int X,int Y,int Z)
{
  digitalWrite(US1_trig,0);
  delayMicroseconds(2);
  digitalWrite(US1_trig,1);
  delayMicroseconds(10);
  digitalWrite(US1_trig,0);
  dur1 = pulseIn(US2_echo,1);
  dis1 = dur1 * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  digitalWrite(US2_trig,0);
  delayMicroseconds(2);
  digitalWrite(US2_trig,1);
  delayMicroseconds(10);
  digitalWrite(US2_trig,0);
  dur2 = pulseIn(US2_echo,1);
  dis2 = dur2 * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  Y = digitalRead(ir);
  X = dis1<10?1:0;
  Z = dis2<10?1:0;
  if(X == 0 && Y == 1 && Z == 0)
  S2(X,Y,Z);
}

void S2(int X,int Y,int Z)
{
  digitalWrite(US1_trig,0);
  delayMicroseconds(2);
  digitalWrite(US1_trig,1);
  delayMicroseconds(10);
  digitalWrite(US1_trig,0);
  dur1 = pulseIn(US2_echo,1);
  dis1 = dur1 * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  digitalWrite(US2_trig,0);
  delayMicroseconds(2);
  digitalWrite(US2_trig,1);
  delayMicroseconds(10);
  digitalWrite(US2_trig,0);
  dur2 = pulseIn(US2_echo,1);
  dis2 = dur2 * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  Y = digitalRead(ir);
  X = dis1<10?1:0;
  Z = dis2<10?1:0;
  if(X == 0 && Y == 0 && Z == 1)
  S5(X,Y,Z);
}

void S3(int X,int Y,int Z)
{
  digitalWrite(US1_trig,0);
  delayMicroseconds(2);
  digitalWrite(US1_trig,1);
  delayMicroseconds(10);
  digitalWrite(US1_trig,0);
  dur1 = pulseIn(US2_echo,1);
  dis1 = dur1 * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  digitalWrite(US2_trig,0);
  delayMicroseconds(2);
  digitalWrite(US2_trig,1);
  delayMicroseconds(10);
  digitalWrite(US2_trig,0);
  dur2 = pulseIn(US2_echo,1);
  dis2 = dur2 * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  Y = digitalRead(ir);
  X = dis1<10?1:0;
  Z = dis2<10?1:0;
  if(X == 0 && Y == 0 && Z == 1)
  S4(X,Y,Z);
}

void S4(int X,int Y,int Z)
{
  digitalWrite(US1_trig,0);
  delayMicroseconds(2);
  digitalWrite(US1_trig,1);
  delayMicroseconds(10);
  digitalWrite(US1_trig,0);
  dur1 = pulseIn(US2_echo,1);
  dis1 = dur1 * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  digitalWrite(US2_trig,0);
  delayMicroseconds(2);
  digitalWrite(US2_trig,1);
  delayMicroseconds(10);
  digitalWrite(US2_trig,0);
  dur2 = pulseIn(US2_echo,1);
  dis2 = dur2 * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  Y = digitalRead(ir);
  X = dis1<10?1:0;
  Z = dis2<10?1:0;
  if(X == 0 && Y == 1 && Z == 0)
  S5(X,Y,Z);
}



void S6(int X,int Y,int Z)
{
  digitalWrite(US1_trig,0);
  delayMicroseconds(2);
  digitalWrite(US1_trig,1);
  delayMicroseconds(10);
  digitalWrite(US1_trig,0);
  dur1 = pulseIn(US2_echo,1);
  dis1 = dur1 * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  digitalWrite(US2_trig,0);
  delayMicroseconds(2);
  digitalWrite(US2_trig,1);
  delayMicroseconds(10);
  digitalWrite(US2_trig,0);
  dur2 = pulseIn(US2_echo,1);
  dis2 = dur2 * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  Y = digitalRead(ir);
  X = dis1<10?1:0;
  Z = dis2<10?1:0;
  if(X == 1 && Y == 0 && Z == 0)
  S5(X,Y,Z);
}

void S5(int X,int Y,int Z)
{
  if(X == 1 && Y == 0 && Z == 0)
  {
  Sum = Sum - 1;
  if(Sum<0)
  Sum = 0;
  }
  else if(X == 0 && Y == 0 && Z == 1)
  {
    Sum = Sum + 1;
  }
  if(X == 1 && Y == 1 && Z == 0)
  {
  Sum = Sum - 1;
  if(Sum<0)
  Sum = 0;
  }
  if(X == 0 && Y == 1 && Z == 1)
  {
  Sum = Sum + 1;
  }
  Serial.print("Number of persons inside = ");
  Serial.println(Sum);
  loop();
}
