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
  shortest_job(); /* call the function. */
}

void shortest_job() {
  int pin[6] = {7, 6, 5, 4, 3, 2};
  int time[6] = {1000, 3000, 4000, 6000, 5000, 2000};
  /* Delay time in milliseconds */
  /* The first to be executed is the P1 followed by P6, P2, P3, P5 and lastly P4.*/
  int temp, i, j; 
 
  for (i = 0; i < 6; ++i){
    for (j = 0; j < 6; ++j){
      if (time[i] < time[j]){
      temp = time[i];
        time[i] = time[j];
        time[j] = temp;
       
        temp = pin[i];
        pin[i] = pin[j];
        pin[j] = temp;
      }
    }
  } 
 
  int count = 0; /*used to identify the element of time array.*/
  while (count != 6){
  digitalWrite(pin[count], HIGH);
    delay(time[count]);
    digitalWrite(pin[count], LOW);
    count++;
  } 
}

