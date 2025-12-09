#include "JYMCU7SEGMENT.h"

JYMCU7SEGMENT disp(4, 3, 2, 11);    //SDI CLK LE OE

void setup() {
  Serial.begin(115200);
  Serial.println("JYMCU7SEGMENT Demo Started");
  disp.begin(18);     
  disp.clear();

//------------basic--------------------  
  Serial.println("Fungsi dasar");
  disp.printInt(123456);
  delay(5000);
  disp.printFloat(30.5, 1);
  delay(2000);
  disp.printString("25.8C");
  delay(2000);  
  disp.clear();
  delay(5000);

//------------basic--------------------  
  Serial.println("Fungsi dasar spesifik digit");
  delay(500);
  disp.printIntAt(0, 3);     // digit 0 = angka 3
  disp.printIntAt(1, 7);     // digit 1 = angka 7
  delay(2000);

  disp.printIntAt(2, 5);
  disp.printIntAt(3, 9);
  delay(1000);

  disp.printCharAt(4, 'C'); // tampil C
  disp.printCharAt(5, '-', true); // tampil - dan nyalain dot
  delay(2000);

  disp.printCharAt(6, '0');
  disp.printCharAt(7, 'c');
  delay(2000);

  disp.printRawAt(8, 0b01100011);  // custom pattern
  delay(2000);

  disp.printRawAt(9, 0b00111111); // tampil 0
  delay(5000);

//------------brightness--------------------  
  Serial.println("Fungsi brightness");
  for (int b = 0; b < 5; b++){
    disp.setBrightness(10);   // redup
    delay(600);
    disp.setBrightness(120);  // sedang
    delay(600);
    disp.setBrightness(255);  // maksimal
    delay(600);
  }    
  disp.clear();
  delay(5000);
  
//------------rendering--------------------
  Serial.println("Fungsi rendering print lalu show all");
  disp.enableAutoRender(false);  // matikan auto-render
  disp.printIntAt(0, 1);
  disp.printIntAt(1, 2);
  disp.printIntAt(2, 3);
  disp.printIntAt(3, 4);
  disp.printCharAt(4, 'C');
  disp.printCharAt(5, '0');
  disp.update();
  delay(5000);

//------------on off display--------------------
  Serial.println("Fungsi display on off");
  delay(1500);
  for (int a = 0; a < 5; a++){
    disp.displayOff();
    delay(500);
    disp.displayOn();
    delay(500);
  }
  
}

void loop() {
  // No loop needed for demo
}
