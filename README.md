# JY-MCU-7SEGMENT-MULTIMODUL
Support multi module but same chip driver
function you can call:

## **General Init**
```
disp.begin(18);               //how many digits in module, support multi module just connecting SDO to SDI other module and count how many digits do you have
disp.clear();                 //like just make display blank
disp.setBrightness(10);       //set 0 to 255
disp.displayOn();
disp.displayOff();
```

## **Print Digits**
```
disp.printInt(123456);          //display 123456 start from digits from left to right
disp.printFloat(30.5, 1);       //if you want to display "." set to 1 after float number
disp.printString("25.8C");      //only support "c" character and ppoint ".", 
disp.printIntAt(0, 3);          //display 3 at digits number 1 (first digit from left)
disp.printIntAt(2, 5);          //display 5 at digits number 3 (3 digit from left)
disp.printCharAt(4, 'C');       //display c at digits number 5 (5 digit from left)
disp.printCharAt(5, '-', true); //display - at digits number 6 (6 digit from left) and display "."
disp.printRawAt(8, 0b01100011); //custom pattern
```

## **Rendering Function**
```
disp.enableAutoRender(false);   //turnoff auto-render
disp.printIntAt(0, 1);
disp.printIntAt(1, 2);
disp.printIntAt(2, 3);
disp.printIntAt(3, 4);
disp.printCharAt(4, 'C');
disp.printCharAt(5, '0');
disp.update();                  //now rendering!
```
