/*
int xpin = A3;
int ypin = A2;
*/
int zpin = A1;
/*
int xval;
int yval;
*/
int zval;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*
  xval = analogRead(xpin);                              //reads values from x-pin & measures acceleration in X direction 
  int x = map(xval, 264, 395, -100, 100);               //maps the extreme ends analog values from -100 to 100 for our understanding
  float xg = (float)x/(-100.00);                          //converts the mapped value into acceleration in terms of "g"
  Serial.print(xg);                                       //prints value of acceleration in X direction
  //Serial.print("g   ");                                   //prints "g"
   
  yval = analogRead(ypin);
  int y = map(yval, 265, 399, -100, 100);
  float yg = (float)y/(-100.00);
  Serial.print("\t");
  Serial.print(yg);
  //Serial.print("g   "); 
  */
  zval = analogRead(zpin);
  int z = map(zval, 269, 401, -100, 100);
  float zg = (float)z/(100.00);
  Serial.print("\t"); 
  Serial.println(zg);
  //Serial.println("g   ");
  delay(100);
}
