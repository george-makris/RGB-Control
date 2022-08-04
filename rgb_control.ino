// Defining the output pins for the rgb values
#define PWM1 1
#define PWM2 2
#define PWM3 3

// Declaring the variables for the analog reading pins
int pR; // Red
int pG; // Green
int pB; // Blue

// Declaring the variable for the pwm value output
int8_t red;
int8_t green;
int8_t blue;

void setup(){
    // Setting the i/o mode to output for the digital pins
    pinMode(PWM1,OUTPUT);
    pinMode(PWM2,OUTPUT);
    pinMode(PWM3,OUTPUT);
    // Setting the i/o mode to input for the analog pins
    pinMode(A0,INPUT);
    pinMode(A1,INPUT);
    pinMode(A2,INPUT);
}

void loop() {
    // Reading the analog values from the input pins
    pR = analogRead(A0);
    pG = analogRead(A1);
    pB = analogRead(A2);

    // Mapping the analogRead range to the analogWrite range
    red = map(pR,0,1023,0,255);
    green = map(pR,0,1023,0,255);
    blue = map(pR,0,1023,0,255);

    // Writting the mapped values to the digital pins  
    analogWrite(PWM1,red);
    analogWrite(PWM2,green);
    analogWrite(PWM3,blue);

}