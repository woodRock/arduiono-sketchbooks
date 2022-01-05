/**
 * Lights Up and Down
 *
 * This is a simple script which loops through the lights applying voltage.
 * The loop is a wave, it is executed in forward then reverse order.
 * 
 * Author: Jesse Wood 2020
 */

// The number of LED pins on the board
#define SIZE 10

// Target pins for LED lights in their board order from left to right
int pins[SIZE] = {4,7,8,10,11,12,13,5,6,9};

// Delay time in milliseconds between each light flash
int timer = 1000;  

/**
 * The setup function is called once BEFORE the loop.
 * This function puts our LEDS in light mode.
 */
void setup() 
{
  for (int i=0; i<SIZE; i++)
  {
    pinMode(pins[i], OUTPUT);
  }
}

/**
 * This function is called each tick and loops forever.
 * It loops through turning each light on briefly, then in reverse. 
 */
void loop() 
{
  reverse();
  forward();
}

/**
 * Turns each light in our pins array on for `timer` seconds.
 */
void forward() 
{
  for (int i=0; i<SIZE-2; i++)
  {
    digitalWrite(pins[i], HIGH);
    delay(timer);      
    digitalWrite(pins[i], LOW);
  }
}

/**
 * Same as above, but in in reverse order.
 */
void reverse() 
{
  for (int i=SIZE-2; i>=0; i--)
  {
    digitalWrite(pins[i], HIGH);
    delay(timer);
    digitalWrite(pins[i], LOW);
  }
}
