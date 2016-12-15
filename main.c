/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using MPLAB(c) Code Configurator

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 3.15.0
        Device            :  PIC16F18855
        Driver Version    :  2.00
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.20
*/

/*
    (c) 2016 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    
     //PWM1_DutyValueSet(30);
     //__delay_ms(100);
     //PWM1_DutyValueSet(0);
     
    // PWM2_DutyValueSet(50);
    // __delay_ms(50);
    // PWM3_DutyValueSet(30);
    // __delay_ms(50);
    // PWM4_DutyValueSet(55);
    // __delay_ms(50);
    // PWM5_DutyValueSet(45);
    // __delay_ms(50);
    //PWM6_LoadDutyValue(45);
    //__delay_ms(50);
    
    int lneck[] = {35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55};
    int leyeh[] = {40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,58,60,62,64};
    int reyeh[] = {20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40};
    while (1)
    {
        // while(IO_RA5_GetValue() == 1){}
        
        reye_SetHigh();
        leye_SetHigh();
        
        PWM1_LoadDutyValue(20);
        // PWM6_LoadDutyValue(35);
        __delay_ms(100);
        PWM1_LoadDutyValue(0);
        // PWM6_LoadDutyValue(0);
        
        int i = 6;
        
        while( i < 20){
            // PWM5_DutyValueSet(lneck[i]);
            PWM2_LoadDutyValue(leyeh[i]);
            PWM3_LoadDutyValue(reyeh[i]);
            i = i + 1;
            __delay_ms(80);
        }
        
        i = 19;
        
        while( i >= 0){
            // PWM5_DutyValueSet(lneck[i]);
            PWM2_LoadDutyValue(leyeh[i]);
            PWM3_LoadDutyValue(reyeh[i]);
            __delay_ms(50);
            i = i  - 1;
        }
        
        // PWM2_DutyValueSet(50);
        // PWM3_DutyValueSet(30);
        // __delay_ms(250);
        // PWM2_DutyValueSet(0);
        // PWM3_DutyValueSet(0);
        // int i = 0;
        
        // for ( i = 0; i<6; i++){
            
        //     PWM6_LoadDutyValue(40);
        //     PWM1_DutyValueSet(39);
        //     __delay_ms(200);
        //     PWM1_DutyValueSet(45);
        //     PWM6_LoadDutyValue(30);
        //     __delay_ms(300);
            
        //     i = i + 1;
        // }
            
        // PWM6_LoadDutyValue(55);
        // PWM1_DutyValueSet(22);
        // __delay_ms(200);
        // PWM1_DutyValueSet(0);
        // PWM5_DutyValueSet(0);
        // PWM6_LoadDutyValue(0);
        // PWM2_DutyValueSet(45);
        // PWM3_DutyValueSet(30);
        reye_SetLow();
        leye_SetLow();
            
    }
}
/**
 End of File
*/