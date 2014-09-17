#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
   lcd.begin(16, 2);
   lcd.print("http://Snoob.me:");
   Serial.begin(9600); 
   lcd.setCursor(0, 1);
}

void loop() {  
    if (Serial.available() > 0) {
              
        char inChar = (char)Serial.read(); 
                
        if (inChar == '\n') {
            delay(5000);
            lcd.clear();
            lcd.print("http://Snoob.me:");
            lcd.setCursor(0,1);
        } else{
            Serial.println(inChar);
            lcd.print(inChar);
            delay(100);
        }           
    }
}
