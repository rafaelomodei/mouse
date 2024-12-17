#include <Arduino.h>
#include <Mouse.h>

void setup() {
    Mouse.begin();
    
    randomSeed(analogRead(0));
}

void loop() {
    int numMovements = random(1, 6); 
    
    for (int i = 0; i < numMovements; i++) {
        int moveX = random(-10, 11); 
        int moveY = random(-10, 11); 
        
        Mouse.move(moveX, moveY, 0);

        delay(random(50, 201));
    }
    
    int randomDelay = random(10000, 30000);
    delay(randomDelay); 
}
