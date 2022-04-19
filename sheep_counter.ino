int pir1=6;
int pir2=7;
int count=0;
int val1=0;
int val2=0;
void setup()
{
  pinMode(pir1,INPUT);
  pinMode(pir2,INPUT);
  Serial.begin(9600);
}

void loop()
{
  val1=digitalRead(pir1);
  val2=digitalRead(pir2);
  if(val1==HIGH){
    delay(100);
    if(val2==HIGH){
      count=count+1;
    }
  }
  else if(val2==HIGH){
    delay(1000);
    if(val1==HIGH){
      count=count-1;
    }
  }
  Serial.println("count= ");
  Serial.println(count);
}