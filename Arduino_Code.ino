// C++ code
# include <Servo.h>
// Class Servo
Servo servo_11;
int i = 0;
void setup(){
  servo_11.attach(11, 500, 2500);
}

void loop(){
  //Text1(90 to 90):
  // 0 to 90 degrees
  for(i = 0; i <= 90; i += 1){
  	servo_11.write(i);
    delay(10);
  }
  delay(1000);
  // 90 to 180 degrees
  for(i = 90; i <= 180; i += 1){
  	servo_11.write(i);
    delay(10);
  }
  delay(1000);
  // 180 to 90 degrees
  for(i = 180; i >= 90; i -= 1){
  	servo_11.write(i);
    delay(10);
  }
  delay(1000);
  // 90 to 0 degrees
  for(i = 90; i >= 0; i -= 1){
  	servo_11.write(i);
    delay(10);
  }
  delay(1000);
  //Text2(180 to 180):
  // 0 to 180 degrees
  for(i = 0; i <= 180; i += 1){
  	servo_11.write(i);
    delay(10);
  }
  delay(1000);
  // 180 to 0 degrees
  for(i = 180; i >= 0; i -= 1){
  	servo_11.write(i);
    delay(10);
  }
  delay(1000);
  //Text3(60 to 60):
  // 0 to 60 degrees
  for(i = 0; i <= 60; i += 1){
  	servo_11.write(i);
    delay(10);
  }
  delay(1000);
  // 60 to 120 degrees
  for(i = 60; i <= 120; i += 1){
  	servo_11.write(i);
    delay(10);
  }
  delay(1000);
  // 120 to 180 degrees
  for(i = 120; i <= 180; i += 1){
  	servo_11.write(i);
    delay(10);
  }
  delay(1000);
  // 180 to 120 degrees
  for(i = 180; i >= 120; i -= 1){
  	servo_11.write(i);
    delay(10);
  }
  delay(1000);
  // 120 to 60 degrees
  for(i = 120; i >= 60; i -= 1){
  	servo_11.write(i);
    delay(10);
  }
  delay(1000);
  // 60 to 0 degrees
  for(i = 60; i >= 0; i -= 1){
  	servo_11.write(i);
    delay(10);
  }
  delay(1000);
  //Text4(45 to 45):
  // 0 to 45 degrees
  for(i = 0; i <= 45; i += 1){
  	servo_11.write(i);
    delay(10);
  }
  delay(1000);
  // 45 to 90 degrees
  for(i = 45; i <= 90; i += 1){
  	servo_11.write(i);
    delay(10);
  }
  delay(1000);
  // 90 to 135 degrees
  for(i = 90; i <= 135; i += 1){
  	servo_11.write(i);
    delay(10);
  }
  delay(1000);
  // 135 to 180 degrees
  for(i = 135; i <= 180; i += 1){
  	servo_11.write(i);
    delay(10);
  }
  delay(1000);
    // 180 to 135 degrees
  for(i = 180; i >= 135; i -= 1){
  	servo_11.write(i);
    delay(10);
  }
  delay(1000);
  // 135 to 90 degrees
  for(i = 135; i >= 90; i -= 1){
  	servo_11.write(i);
    delay(10);
  }
  delay(1000);
  // 90 to 45 degrees
  for(i = 90; i >= 45; i -= 1){
  	servo_11.write(i);
    delay(10);
  }
  delay(1000);
  // 45 to 0 degrees
  for(i = 45; i >= 0; i -= 1){
  	servo_11.write(i);
    delay(10);
  }
  delay(1000);
}
