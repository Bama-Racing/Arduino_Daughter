char dataString[50] = {0};
int a = 0;
int b;

/*
 * The sprintf function will write the formatting string and the variables into the "data" character array.
 * You provide a formatting string template, that contains placeholders for variables that you plan to insert.
 * These placeholders have a percentage sign (%) prefix.  Eg.  %s, %d, %f etc.
 * The number of placeholders must match the number of variables.
 * The variables are inserted at the placeholder position, and formatted based on the type of placeholder used.
 * %d = signed integer               %f = floating point number  
 * %s = string                     %.1f = float to 1 decimal place
 * %c = character                  %.3f = float to 3 decimal places
 * %e = scientific notation          %g = shortest representation of %e or %f                
 * %u = unsigned integer             %o = unsigned octal
 * %x = unsigned hex (lowercase)     %X = unsigned hex (uppercase)
 * %hd = short int                  %ld = long int
 * %lld = long long int
 */

void setup() {
  Serial.begin(256000);              //Starting serial communication
}

void loop() {
  a++;                          // a value increase every loop
  sprintf(dataString, "%02X", a); // convert a value to hexa
  Serial.println(millis());   // send the data
  delay(1000);                  // give the loop some break
}
