#include <stdio.h>
#include <stdint.h>
#include "GPIO.h"

// Define macros for LED pin and port
#define LED_PIN 5
#define LED_PORT GPIOA

// Define a macro for the delay value
#define DELAY_VALUE 1000

// Function prototypes
void GPIO_Init(void);
void GPIO_WritePin(uint8_t pin, uint8_t value);
void Delay(uint32_t delay);

int main(void) {

	//printf("In program\n");
    // Initialize GPIO
    GPIO_Init();


    // Main loop
    while (1) {
        // Toggle LED
        GPIO_WritePin(LED_PIN, 1); // Turn on the LED
        Delay(DELAY_VALUE);
        GPIO_WritePin(LED_PIN, 0); // Turn off the LED
        Delay(DELAY_VALUE);
    }

    return 0;
}

// Function to initialize GPIO
void GPIO_Init(void) {
    // Set LED_PIN as output
    // Assuming a generic microcontroller's GPIO initialization sequence
    LED_PORT->MODER |= (1 << (LED_PIN * 2));
    printf("GPIO Initialization successful!\n");
}

// Function to write a value to a GPIO pin
void GPIO_WritePin(uint8_t pin, uint8_t value) {
    if (value) {
        LED_PORT->ODR |= (1 << pin); // Set the pin
    } else {
        LED_PORT->ODR &= ~(1 << pin); // Reset the pin
    }
}

// Function to introduce a delay
void Delay(uint32_t delay) {
    for (uint32_t i = 0; i < delay * 1000; i++) {
        __asm__("nop"); // No operation (wastes time)
    }
}
