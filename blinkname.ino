
int led1 = D7;



void setup() 
{
    pinMode(led1, OUTPUT);

}

void dot()
{
    digitalWrite(led1, HIGH);     
    delay(250); 
    digitalWrite(led1, LOW);
    delay(250); 
}

void dash()
{
    digitalWrite(led1, HIGH);    
    delay(500); 
    digitalWrite(led1, LOW);
    delay(500); 
}

void R()
{
    dot();
    dash();
    dot();
}

void Y()
{
    dash();
    dot();
    dash();
    dash();
}

void A()
{
    dot();
    dash();
}


void N()
{
    dash();
    dot();
}


void loop() 
{
    R();
    Y();
    A();
    N();
    
}
