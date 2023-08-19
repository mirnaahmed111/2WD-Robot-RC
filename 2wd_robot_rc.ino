int EN1 = 9;
int EN2 = 10;
int in1 = 2;
int in2 = 3;
int in3 = 6;
int in4 = 7;
int reading =0;

void setup() {
pinMode(EN1,OUTPUT);
pinMode(EN2,OUTPUT);
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0){
    reading=Serial.read(); 
  }
if (reading=='f'){
  forword();
  }
 else if(reading== 'b'){
  back();
  }
else if(reading == 'l'){
  left();
  }
 else if (reading== 'r'){
 right();
  }
}

void forword (){
analogWrite(EN1,128);
analogWrite(EN2,128);
digitalWrite(in1,1);
digitalWrite(in2,0);
digitalWrite(in3,1);
digitalWrite(in4,0);
  }

  
void back (){
analogWrite(EN1,128);
analogWrite(EN2,128);
digitalWrite(in1,0);
digitalWrite(in2,1);
digitalWrite(in3,0);
digitalWrite(in4,1);
  }

  void right (){
analogWrite(EN1,128);
analogWrite(EN2,128);
digitalWrite(in1,0);
digitalWrite(in2,0);
digitalWrite(in3,1);
digitalWrite(in4,0);
  }

  void left (){
analogWrite(EN1,128);
analogWrite(EN2,128);
digitalWrite(in1,1);
digitalWrite(in2,0);
digitalWrite(in3,0);
digitalWrite(in4,0);
  }

  
  void stop1 (){
 analogWrite(EN1,0);
analogWrite(EN2,0);
digitalWrite(in1,0);
digitalWrite(in2,1);
digitalWrite(in3,0);
digitalWrite(in4,1);
  }
