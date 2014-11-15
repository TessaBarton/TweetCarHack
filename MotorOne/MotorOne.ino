/* MotorOne, as in, the first of the motor functions
define final function here
By Miss Theresa Barton
*/

int led = 13; // for debugging
int leftTwo = 3;// one motor on one wheel
int leftOne = 2; // ditto
int leftThree = 4;
int leftFour = 5;
int rightOne = 6;
int rightTwo = 7;
int rightThree = 8;
int rightFour = 9;



void setup(){
  pinMode(led,OUTPUT); 
  pinMode(leftFour, OUTPUT);
  pinMode(leftThree, OUTPUT);
  pinMode(leftOne, OUTPUT);
  pinMode(leftTwo, OUTPUT);
  pinMode(rightFour, OUTPUT);
  pinMode(rightThree, OUTPUT);
  pinMode(rightOne, OUTPUT);
  pinMode(rightTwo, OUTPUT);
}

void loop(){
//  digitalWrite(led,HIGH);
//  delay(1000);
//  digitalWrite(led,LOW);
//  delay(1000);
forwards();
delay(1000);
halt();
delay(1000);

}

void backwards(){
///*forwardL*/
  digitalWrite(leftOne,LOW);
  digitalWrite(leftTwo,HIGH);
  digitalWrite(leftThree,HIGH);
  digitalWrite(leftFour, LOW);
//
///*forward R*/
  digitalWrite(rightTwo, HIGH);
  digitalWrite(rightThree,HIGH);
  digitalWrite(rightFour, LOW);
  digitalWrite(rightOne, LOW);
  delay(1000);
}
void forwards(){
  /*welcome to the poorly wired left wheel*/
/*backwards L*/
  digitalWrite(leftOne, HIGH);
  digitalWrite(leftTwo, LOW);
  digitalWrite(leftThree,LOW);
  digitalWrite(leftFour, HIGH);

//  ///*backward R*/
    digitalWrite(rightTwo, LOW);
    digitalWrite(rightThree,LOW);
    digitalWrite(rightFour, HIGH);
    digitalWrite(rightOne, HIGH);

}
void halt(){
  /*welcome to the poorly wired left wheel*/
/*backwards L*/
  digitalWrite(leftOne, HIGH);
  digitalWrite(leftTwo, LOW);
  digitalWrite(leftThree,LOW);
  digitalWrite(leftFour, HIGH);

//  ///*backward R*/
    digitalWrite(rightTwo, LOW);
    digitalWrite(rightThree,LOW);
    digitalWrite(rightFour, HIGH);
    digitalWrite(rightOne, HIGH);
}
