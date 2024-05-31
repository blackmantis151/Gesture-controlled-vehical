#define in1 = 12
#define in2 = 11
#define in3 = 10
#define in4 = 9
int enA = 6;
int enB = 5;

void setup() {
  Serial.begin(19200);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  }

void loop() {
  if (Serial.available() > 0) {
    char inputvalue = char(Serial.read());
    Serial.print(inputvalue);
    if (inputvalue == 'F') {
      digitalWrite(12, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(9, LOW);
      analogWrite(enA, 255); // Set motor 1 speed to maximum
      analogWrite(enB, 255); // Set motor 2 speed to maximum
    }
    else if (inputvalue == 'B') {
      digitalWrite(12, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(9, HIGH);
      analogWrite(enA, 255); // Set motor 1 speed to maximum
      analogWrite(enB, 255); // Set motor 2 speed to maximum
    }

    else if (inputvalue == 'R') {
      digitalWrite(12, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(9, LOW);
      analogWrite(enA, 255); // Set motor 1 speed to maximum
      analogWrite(enB, 255); // Set motor 2 speed to maximum
    }

    else if (inputvalue == 'L') {
      digitalWrite(12, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(9, HIGH  );
      analogWrite(enA, 255); // Set motor 1 speed to maximum
      analogWrite(enB, 255); // Set motor 2 speed to maximum
    }

    else if (inputvalue == 'C') {
      digitalWrite(12, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(9, LOW);
      analogWrite(enA, 255); // Set motor 1 speed to maximum
      analogWrite(enB, 255); // Set motor 2 speed to maximum
    }

    else if (inputvalue == 'A') {
      digitalWrite(12, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(9, HIGH);
      analogWrite(enA, 255); // Set motor 1 speed to maximum
      analogWrite(enB, 255); // Set motor 2 speed to maximum
    }

    

    else if (inputvalue == 'S') {
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(9, LOW);
      analogWrite(enA, 255); // Set motor 1 speed to maximum
      analogWrite(enB, 255); // Set motor 2 speed to maximum
    }
  }
}
