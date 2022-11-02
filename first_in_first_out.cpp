// C++ code

void setup() {
  pinMode(7, OUTPUT); /* set port 7 to output */
  pinMode(6, OUTPUT); /* set port 6 to output */
  pinMode(5, OUTPUT); /* set port 5 to output */
  pinMode(4, OUTPUT); /* set port 4 to output */
  pinMode(3, OUTPUT); /* set port 3 to output */
  pinMode(2, OUTPUT); /* set port 2 to output */
}

void loop() {
  first_in_first_out(); /* call the function. */
}

void first_in_first_out(){
  int time[6] = {2000, 5000, 1000, 3000, 4000, 3000};
  /* delay time in milliseconds */
  int count = 0; /*used to identify the element of time array.*/
  int i;
  for (i = 7; i >= 2; --i){
  digitalWrite(i, HIGH); /*Turn the LED On*/
    delay(time[count]); /*Delay.*/
    digitalWrite(i, LOW); /*Turn the LED Off*/
    count++; /*Increment count.*/
  }
}

