#ifndef GPIO_H
#define GPIO_H

#include <stdint.h>

// Simulate a GPIO port structure
typedef struct {
    uint32_t MODER; // Mode register
    uint32_t ODR;   // Output data register
} GPIO_TypeDef;

// Simulate GPIO port A
#define GPIOA ((GPIO_TypeDef *)0x40020000)

// Function prototypes
void GPIO_Init(void);
void GPIO_WritePin(uint8_t pin, uint8_t value);
void Delay(uint32_t delay);

#endif // GPIO_H
