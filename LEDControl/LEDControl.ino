

byte PATTERN[][4] = { 
   {B1111, B0000, B0000, B0000},
   {B0000, B1111, B0000, B0000},
   {B0000, B0000, B1111, B0000},
   {B0000, B0000, B0000, B1111},
   {B0000, B0000, B1111, B0000},
   {B0000, B1111, B0000, B0000},
   {B1111, B0000, B0000, B0000},
   {B0000, B0000, B0000, B0000},
   {B0000, B0000, B0000, B0000},
   {B1000, B1000, B1000, B1000},
   {B0100, B0100, B0100, B0100},
   {B0010, B0010, B0010, B0010},
   {B0001, B0001, B0001, B0001},
   {B0010, B0010, B0010, B0010},
   {B0100, B0100, B0100, B0100},
   {B1000, B1000, B1000, B1000},
   {B0000, B0000, B0000, B0000},

   {B0000, B0000, B0000, B0000}
};


byte HSWEEP[][4] = { 
   {B1000, B1000, B1000, B1000},
   {B0100, B0100, B0100, B0100},
   {B0010, B0010, B0010, B0010},
   {B0001, B0001, B0001, B0001},
   {B0010, B0010, B0010, B0010},
   {B0100, B0100, B0100, B0100},
   {B1000, B1000, B1000, B1000},
   {B0000, B0000, B0000, B0000}
};

byte VSWEEP[][4] = { 
   {B1111, B0000, B0000, B0000},
   {B0000, B1111, B0000, B0000},
   {B0000, B0000, B1111, B0000},
   {B0000, B0000, B0000, B1111},
   {B0000, B0000, B1111, B0000},
   {B0000, B1111, B0000, B0000},
   {B1111, B0000, B0000, B0000},
   {B0000, B0000, B0000, B0000}
};


byte KLOTZ[][4] = { 
   {B1001, B1010, B1110, B1001},
   {B1000, B1000, B1000, B1111},
   {B1111, B1001, B1001, B1111},
   {B1111, B0110, B0110, B0110},
   {B1111, B0010, B0100, B1111}
 
};


byte KLOTZ2[][4] = { 

   {B0001, B0001, B0001, B0001},
   {B0010, B0010, B0011, B0010},
   {B0100, B0101, B0111, B0100},
   {B1001, B1010, B1110, B1001},
   {B0010, B0100, B1100, B0010},
   {B0101, B1001, B1001, B0101},
   {B1010, B0010, B0010, B1011},
   {B0100, B0100, B0100, B0111},
   {B1000, B1000, B1000, B1111},
   {B0000, B0000, B0000, B1110},
   {B0001, B0001, B0001, B1101},
   {B0011, B0010, B0010, B1011},
   {B0111, B0100, B0100, B0111},
   {B1111, B1001, B1001, B1111},
   {B1110, B0010, B0010, B1110},
   {B1101, B0100, B0100, B1100},
   {B1011, B1001, B1001, B1001},
   {B0111, B0011, B0011, B0011},
   {B1111, B0110, B0110, B0110},
   {B1110, B1100, B1100, B1100},
   {B1101, B1000, B1000, B1001},
   {B1011, B0000, B0001, B0011},
   {B0111, B0001, B0010, B0111},
   {B1111, B0010, B0100, B1111},
   {B1110, B0100, B1000, B1110},
   {B1100, B1000, B0000, B1100},
   {B1000, B0000, B0000, B1000},
   {B0000, B0000, B0000, B0000}
 
};

byte SPIRAL[][4] = { 
   {B1000, B0000, B0000, B0000},
   {B0100, B0000, B0000, B0000},
   {B0010, B0000, B0000, B0000},
   {B0001, B0000, B0000, B0000},
   {B0000, B0001, B0000, B0000},
   {B0000, B0000, B0001, B0000},
   {B0000, B0000, B0000, B0001},
   {B0000, B0000, B0000, B0010},
   {B0000, B0000, B0000, B0100},
   {B0000, B0000, B0000, B1000},
   {B0000, B0000, B1000, B0000},
   {B0000, B1000, B0000, B0000},
   {B0000, B0100, B0000, B0000},
   {B0000, B0010, B0000, B0000},
   {B0000, B0000, B0010, B0000},
   {B0000, B0000, B0100, B0000},
   {B0000, B0100, B0000, B0000},
   {B0000, B0000, B0000, B0000}
};

byte CIRCLE[][4] = { 
   {B1000, B0000, B0000, B0000},
   {B0100, B0000, B0000, B0000},
   {B0010, B0000, B0000, B0000},
   {B0001, B0000, B0000, B0000},
   {B0000, B0001, B0000, B0000},
   {B0000, B0000, B0001, B0000},
   {B0000, B0000, B0000, B0001},
   {B0000, B0000, B0000, B0010},
   {B0000, B0000, B0000, B0100},
   {B0000, B0000, B0000, B1000},
   {B0000, B0000, B1000, B0000},
   {B0000, B1000, B0000, B0000}
};

byte DIAGLR[][4] = { 
   {B1000, B0000, B0000, B0000},
   {B0100, B1000, B0000, B0000},
   {B0010, B0100, B1000, B0000},
   {B0001, B0010, B0100, B1000},
   {B0000, B0001, B0010, B0100},
   {B0000, B0000, B0001, B0010},
   {B0000, B0000, B0000, B0001},
   {B0000, B0000, B0000, B0000}
};
byte DIAGRL[][4] = { 
   {B0001, B0000, B0000, B0000},
   {B0010, B0001, B0000, B0000},
   {B0100, B0010, B0001, B0000},
   {B1000, B0100, B0010, B0001},
   {B0000, B1000, B0100, B0010},
   {B0000, B0000, B1000, B0100},
   {B0000, B0000, B0000, B1000},
   {B0000, B0000, B0000, B0000}
};
 
byte ZOOM[][4] = { 
   {B1111, B1001, B1001, B1111},
   {B0000, B0110, B0110, B0000},
   {B0000, B0000, B0000, B0000}
};

byte SIN[][4] = { 
   {B0001, B0010, B0100, B1000},
   {B0011, B0100, B1000, B0000},
   {B0110, B1001, B0000, B0000},
   {B1100, B0010, B0001, B0000},
   {B1000, B0100, B0010, B0001},
   {B0000, B1000, B0100, B0011},
   {B0000, B0000, B1001, B0110},
   {B0000, B0001, B0010, B1100}
};
 
 
byte LINE1[][4] = { 
   {B1111, B0000, B0000, B0000}
};

byte ON[][4] = { 
   {B1111, B1111, B1111, B1111}
};

byte OFF[][4] = { 
   {B0000, B0000, B0000, B0000}
};

byte ONOFF[][4] = { 
   {B1111, B1111, B1111, B1111},
   {B0000, B0000, B0000, B0000}
};

byte HWIPE[][4] = { 
   {B1000, B1000, B1000, B1000},
   {B0100, B0100, B0100, B0100},
   {B0010, B0010, B0010, B0010},
   {B0001, B0001, B0001, B0001}
};

byte HWIPE2X[][4] = { 
   {B1010, B1010, B1010, B1010},
   {B0101, B0101, B0101, B0101},
   {B1010, B1010, B1010, B1010},
   {B0101, B0101, B0101, B0101}
};
 
byte SPIN[][4] = { 
   {B1000, B0100, B0010, B0001},
   {B0100, B0100, B0010, B0010},
   {B0010, B0010, B0100, B0100},
   {B0001, B0010, B0100, B1000},
   {B0000, B0011, B1100, B0000},
   {B0000, B1100, B0011, B0000}
};



byte LETTER_I[][4] = { {B1111, B0110, B0110, B1111} };
byte LETTER_N[][4] = { {B1001, B1101, B1011, B1001} };
byte LETTER_T[][4] = { {B1111, B0110, B0110, B0110} };

byte LETTER_W[][4] = { {B1001, B1001, B1111, B1001} };
byte LETTER_A[][4] = { {B1111, B1001, B1111, B1001} };


byte BUTTON2[][4] = { 
  {B0100, B0000, B0000, B0000},
  {B1010, B0100, B0000, B0000},
  {B0001, B1010, B0100, B0000},
  {B0000, B0001, B1010, B0100},
  {B0000, B0000, B0001, B1010},
  {B0000, B0000, B0000, B0001},
  {B0000, B0000, B0000, B0000}
};

boolean init_done = false;

//int ROW_PINS[] = {12, 11, 10, 9};
int ROW_PINS[] = {11, 10, 9, 8};
int COL_PINS[] = {5, 4, 3, 2};
#define ROW_COUNT 4
#define COL_COUNT 4
#define MULTIPLEX_DELAY_MS 1000
#define PATTERN_DELAY_MS 150
//#define PATTERN_SIZE 34
#define PATTERN_SIZE 18


#define KLOTZ_DELAY_MS 1000
#define KLOTZ_SIZE 5

#define CIRCLE_DELAY_MS 100
#define CIRCLE_SIZE 12

#define SPIRAL_DELAY_MS 100
#define SPIRAL_SIZE 18


#define DIAG_DELAY_MS 100
#define DIAG_SIZE 8

#define HSWEEP_DELAY_MS 100
#define HSWEEP_SIZE 8

#define VSWEEP_DELAY_MS 100
#define VSWEEP_SIZE 8


void ShowPattern(byte pattern[]) {
  int last_row = ROW_COUNT-1;
  for (int row = 0; row < ROW_COUNT; last_row = row++) {
    
    digitalWrite(ROW_PINS[last_row], LOW);
    SetColumn(pattern[row]);
    digitalWrite(ROW_PINS[row], HIGH);
    
   
   
    delayMicroseconds(MULTIPLEX_DELAY_MS);
  }
}
void SetColumn(byte pattern) {
  for (int i = COL_COUNT-1; i >= 0; i--, pattern >>= 1) {
    digitalWrite(COL_PINS[i], pattern & 1 ? LOW : HIGH);
  }
}
void setup()                    // run once, when the sketch starts
{
  pinMode(2, OUTPUT);      // sets the digital pin as output
  pinMode(3, OUTPUT);      // sets the digital pin as output
  pinMode(4, OUTPUT);      // sets the digital pin as output
  pinMode(5, OUTPUT);      // sets the digital pin as output
  pinMode(6, OUTPUT);      // sets the digital pin as output
  pinMode(8, OUTPUT);      // sets the digital pin as output
  pinMode(9, OUTPUT);      // sets the digital pin as output
  pinMode(10, OUTPUT);      // sets the digital pin as output
  pinMode(11, OUTPUT);      // sets the digital pin as output
  pinMode(12, OUTPUT);      // sets the digital pin as output
  pinMode(13, OUTPUT);      // sets the digital pin as output
  pinMode(14, OUTPUT);      // sets the digital pin as output
}

void Display(byte pattern[][4], int size, int delay) {
  for (int pos = 0; pos < size; pos++) {
    long start = millis();
    while (millis() - start < delay) {
      ShowPattern(pattern[pos]);
    }
  }
}


void loop()
{  
/*
  Display (BUTTON2, 7, 100);
  Display (BUTTON2, 7, 100);
  Display (BUTTON2, 7, 100);
  Display (BUTTON2, 7, 100);
  Display (BUTTON2, 7, 100);
  */
  if (!init_done) {
    init_done = true;
    Display (LETTER_I, 1, 500);
    Display (LETTER_N, 1, 500);
    Display (LETTER_I, 1, 500);
    Display (LETTER_T, 1, 500);

    Display (OFF, 1, 1000);

    Display (LETTER_W, 1, 500);
    Display (LETTER_A, 1, 500);  
    Display (LETTER_I, 1, 500);
    Display (LETTER_T, 1, 500);

    Display (OFF, 1, 1000);
  
    for (int i=1; i<10; i++)
        Display (SPIN, 6, 100);
  
    Display (KLOTZ2, 28, 250);
  
    for (int i=1; i<100; i++)
        Display (ONOFF, 2, 1000/i);
  
    Display (SIN, 8, 100);
    Display (SIN, 8, 100);
    Display (SIN, 8, 100);
    Display (SIN, 8, 100);
    Display (SIN, 8, 100);
    
    Display(KLOTZ, KLOTZ_SIZE, KLOTZ_DELAY_MS);  
    
    for (int i=0; i<5; i++)
        Display(CIRCLE, CIRCLE_SIZE, CIRCLE_DELAY_MS);
    Display(SPIRAL, SPIRAL_SIZE, CIRCLE_DELAY_MS);
    
    for (int i=0; i<6; i++)
        Display (ZOOM, 3, 150);
  
    Display (KLOTZ2, 28, 250);
    
    Display(HSWEEP, HSWEEP_SIZE, HSWEEP_DELAY_MS);
    Display(VSWEEP, VSWEEP_SIZE, VSWEEP_DELAY_MS);
  
    Display(KLOTZ, KLOTZ_SIZE, KLOTZ_DELAY_MS);
  
    for (int i=0; i<2; i++) {
        Display(DIAGLR, DIAG_SIZE, DIAG_DELAY_MS);
        Display(DIAGRL, DIAG_SIZE, DIAG_DELAY_MS);
    }
  }
}

