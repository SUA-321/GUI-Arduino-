int in1 = 7;
int in2 = 8;
int enA = 5;

int in3 = 9;
int in4 = 10;
int enB = 6;

void setup()
{
    pinMode(enA, OUTPUT);
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    pinMode(enB, OUTPUT);
    pinMode(in3, OUTPUT);
    pinMode(in4, OUTPUT);
    
}

 void loop()
 {
  char data = Serial.read();

    switch (data){
    case 'ON':     digitalWrite(in1, HIGH);
                   digitalWrite(in2, LOW);
                   digitalWrite(in3, HIGH);
                   digitalWrite(in4, LOW);
                   digitalWrite(enA, 100);
                   digitalWrite(enB, 100); break;
                   
    case 'DOWN':   digitalWrite(in1, LOW);
                   digitalWrite(in2, HIGH);
                   digitalWrite(in3, LOW);
                   digitalWrite(in4, HIGH);
                   digitalWrite(enA, 100);
                   digitalWrite(enB, 100); break;

    case 'LEFT':   digitalWrite(in1, HIGH);
                   digitalWrite(in2, LOW);
                   digitalWrite(in3, HIGH);
                   digitalWrite(in4, LOW);
                   digitalWrite(enA, 0);
                   digitalWrite(enB, 100); break;

    case 'RIGHT':  digitalWrite(in1, HIGH);
                   digitalWrite(in2, LOW);
                   digitalWrite(in3, HIGH);
                   digitalWrite(in4, LOW);
                   digitalWrite(enA, 100);
                   digitalWrite(enB, 0); break;
    }
 }
