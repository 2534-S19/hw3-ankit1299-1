/*
 * GPIO.c
 *
 *  Created on:
 *      Author:
 */

// For the code you place here, you may use your code that uses register references.
// However, I encourage you to start using the Driver Library as soon as possible.

#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include "myGPIO.h"
#define RB BIT4 //Rightmost launchpad button

#define RedLed2 BIT0 //red led2

#define GreenLed2 BIT1 //Green led 2

#define BlueLed2 BIT2 //Blue led 2

#define L_LED BIT0 //Left led

#define RED_BoostLed BIT6 // booster red led

#define GREEN_BoostLed BIT4 // booster green led

#define BLUE_BoostLed BIT6 // booster blue led

#define B1 BIT1 // booster pack upper Button 1

#define B2 BIT5 // booster pack lower Button 2

#define LB BIT1 //left Button
// TODO: Create a function to initialize the GPIO.
// Even though this assignment does not use all of the pushbuttons, you should write one function that does a complete GPIO init.
void initGPIO()
{
    // Launchpad S1
    P1DIR &= ~LB;
    P1DIR |= L_LED;
    P1DIR &= ~RB;
    P1REN |= LB;
    P1REN |= RB;
    P2DIR |= RedLed2;
    P2DIR |= GreenLed2;
    P2DIR |= BlueLed2;
    P3DIR &= ~B1;
    P3DIR &= ~B2;
    P3REN |= B1;
    P3REN |= B2;
    P2DIR |= RED_BoostLed;
    P2DIR |= GREEN_BoostLed;
    P5DIR |= BLUE_BoostLed;
    // Launchpad S2


}

// TODO: Create a function to return the status of Launchpad Pushbutton S1
unsigned char checkStatus_LaunchpadS1()
{
    return(P1IN & LB);
}

// TODO: Create a function to return the status of Launchpad Pushbutton S2
unsigned char checkStatus_LaunchpadS2()
{
    return(P1IN & RB);
}

// TODO: Create a function to return the status of Boosterpack Pushbutton S1
unsigned char checkStatus_BoosterpackS1()
{
    return(P5IN & B1);
}

// TODO: Create a function to return the status of Boosterpack Pushbutton S2
unsigned char checkStatus_BoosterpackS2()
{
    return(P3IN & B2);
}

// TODO: Create a function to turn on Launchpad LED1.
void turnOn_LaunchpadLED1()
{
    return();
}

// TODO: Create a function to turn off Launchpad LED1.
void turnOff_LaunchpadLED1()
{
    return();
}

// TODO: Create a function to turn on the Red Launchpad LED2.
void turnOn_LaunchpadLED2Red()
{
    return();
}

// TODO: Create a function to turn off the Red Launchpad LED2.
void turnOff_LaunchpadLED2Red()
{
    return();
}

// TODO: Create a function to turn on the Green Launchpad LED2.
void turnOn_LaunchpadLED2Green()
{
    return();
}

// TODO: Create a function to turn off the Green Launchpad LED2.
void turnOff_LaunchpadLED2Green()
{
    return();
}

// TODO: Create a function to turn on the Blue Launchpad LED2.
void turnOn_LaunchpadLED2Blue()
{
    return();
}

// TODO: Create a function to turn off the Blue Launchpad LED2.
void turnOff_LaunchpadLED2Blue()
{
    return();
}

// TODO: Create a function to turn on the Red Boosterpack LED2.
void turnOn_BoosterpackLEDRed()
{
    return();
}

// TODO: Create a function to turn off the Red Boosterpack LED2.
void turnOff_BoosterpackLEDRed()
{
    return();
}

// TODO: Create a function to turn on the Green Boosterpack LED2.
void turnOn_BoosterpackLEDGreen()
{
    return();
}

// TODO: Create a function to turn off the Green Boosterpack LED2.
void turnOff_BoosterpackLEDGreen()
{
    return();
}

// TODO: Create a function to turn on the Blue Boosterpack LED2.
void turnOn_BoosterpackLEDBlue()
{
    return();
}

// TODO: Create a function to turn off the Green Boosterpack LED2.
void turnOff_BoosterpackLEDBlue()
{
    return();
}
