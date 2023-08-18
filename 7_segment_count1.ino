
const byte digit[10][7] = {
  {1, 1, 1, 1, 1, 1, 0},  
  {0, 1, 1, 0, 0, 0, 0}, 
  {1, 1, 0, 1, 1, 0, 1},  
  {1, 1, 1, 1, 0, 0, 1},  
  {0, 1, 1, 0, 0, 1, 1},  
  {1, 0, 1, 1, 0, 1, 1},  
  {1, 0, 1, 1, 1, 1, 1},  
  {1, 1, 1, 0, 0, 0, 0},  
  {1, 1, 1, 1, 1, 1, 1},  
  {1, 1, 1, 1, 0, 1, 1}   
};


const byte sev[7] = {0,1,2, 3, 4, 5, 6};

void setup() {
  
  for (byte i = 0; i < 7; i++) {
    pinMode(sev[i], OUTPUT);
  }
}

void loop() {
  
  for (byte y = 0; y < 10; y++) {
    displayDigit(y);
    delay(1000);  
  }
}


void displayDigit(byte y) {
  
  for (byte i = 0; i < 7; i++) {
    digitalWrite(sev[i], digit[y][i]);
  }
}