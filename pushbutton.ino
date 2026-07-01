int led=5;
int button=8;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(button,INPUT);// put your setup code here, to run once:

}

void loop() {
  int a= digitalRead(button);
  if (a==HIGH)
  {digitalWrite(led,HIGH);}
  else{digitalWrite(led,LOW);}// put your main code here, to run repeatedly:

}
