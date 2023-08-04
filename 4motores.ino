#include <AFMotor.h> 

AF_DCMotor motor1(1); 
AF_DCMotor motor2(2); 
AF_DCMotor motor3(3); 
AF_DCMotor motor4(4); 


void setup () {

motor1.run(RELEASE);
motor2.run(RELEASE);
motor3.run(RELEASE);
motor4.run(RELEASE);

}

void loop() {
motor1.run(FORWARD) ;
motor2.run(FORWARD) ;
motor3.run(FORWARD) ;
motor4.run(FORWARD) ;
delay (2000) ;
motor1.setSpeed(180);
motor2.setSpeed(180);
motor3.setSpeed(180);
motor4.setSpeed(180);
motor1.run(BACKWARD) ;
motor2.run(BACKWARD) ;
motor3.run(BACKWARD) ;
motor4.run(BACKWARD) ;
delay(2000);
}

//motor 3 = 2????
//motor 2 = dd?
//motor 3 = di
//motor 4 = ti
//motor 1 = td
