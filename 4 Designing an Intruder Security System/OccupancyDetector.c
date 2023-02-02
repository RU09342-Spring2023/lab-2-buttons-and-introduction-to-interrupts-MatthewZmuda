/*
 * OccupancyDetector.c
 *
 *  Created on: Feb 02, 2023
 *      Author: Matthew Zmuda
 */
#include <msp430.h>
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
    P6DIR |= BIT6;              // Configure P6.6 to an Output
    P2DIR &= ~BIT3;             // Configure P2.3 to an Input

    P2REN |= BIT3;               // Enable Resistor on P2.3
    P2OUT |= BIT3;               // Configure Resistor on P2.3 to be Pullup

    P4DIR &= BIT1;
    P4EN |= BIT1;
    P4OUT |= BIT1;

    PM5CTL0 &= ~LOCKLPM5;                   // Disable the GPIO power-on default high-impedance mode
                                                // to activate previously configured port settings


void main() {
    while(1){
        P6OUT ^= BIT6;
        __delay_cycles(300000);
    }




}



