int MY_LED = D7;
int MY_BUTTON = D6;
int val = 0;

SYSTEM_THREAD(ENABLED);

//functions
void dash() {
    digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
}

void dot() {
    digitalWrite(MY_LED, HIGH);
	delay(200);
	digitalWrite(MY_LED, LOW);
	delay(1s);
}

void letterP() {
    dot();
    dash();
    dash();
    dot();
    delay(1s);
}

void letterA() {
    dot();
    dash();
    delay(1s);
}

void letterU() {
    dot();
    dot();
    dash();
    delay(1s);
}

void letterL() {
    dot();
    dash();
    dot();
    dot();
    delay(1s);
}

void setup() {
    
    pinMode(MY_LED, OUTPUT);
    pinMode(MY_BUTTON, INPUT_PULLDOWN);

}

void loop() {
    
    val = digitalRead(MY_BUTTON);
    if (val = 0) 
    {
        delay(100ms);
        return;
    }
    else if (val = 1)
    {
    
        letterP();
        letterA();
        letterU();
        letterL();
    }
}