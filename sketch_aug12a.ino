#include <Mire.h>

#include <LiquidCrystal_12C.h>

 

LiquidCrystal_12C lcd(0x27,2,1,0,4,5,6,7,8, POSITIVE),

void setup() {
              lcd bagin(16,2)

}

void loop() {
                lcd setBackLight (HIGH);

                lcd setCursor(0,0);

                lcd print("Kaiquera");

                lcd serCursor(0,1);

                lcd print("Projeto final do curso");

                delay(1000);

                lcd setBackLight(LOW);

                delay(1000);

}
