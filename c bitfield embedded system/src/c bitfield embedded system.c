#include <stdio.h>
#include <stdint.h>
#include <string.h>

// Define SPI Control Register using bitfields
typedef struct {
    uint8_t CPHA : 1;   // Clock Phase
    uint8_t CPOL : 1;   // Clock Polarity
    uint8_t MSTR : 1;   // Master/Slave Select
    uint8_t BR : 3;     // Baud Rate
    uint8_t SPE : 1;    // SPI Enable
    uint8_t SPIE : 1;   // SPI Interrupt Enable
} SPIControlRegisterBitfields;

// Define SPI Status Register using bitfields
typedef struct {
    uint8_t RXC : 1;    // Receive Complete
    uint8_t TXC : 1;    // Transmit Complete
    uint8_t WCOL : 1;   // Write Collision
    uint8_t SPIF : 1;   // SPI Interrupt Flag
    uint8_t RESERVED : 4; // Reserved
} SPIStatusRegisterBitfields;

// Define SPI Control Register as union
typedef union {
    SPIControlRegisterBitfields bits;
    uint8_t value;
} SPIControlRegister;

// Define SPI Status Register as union
typedef union {
    SPIStatusRegisterBitfields bits;
    uint8_t value;
} SPIStatusRegister;

// Define SPI Data Register (not using bitfields, typically 8 bits)
typedef uint8_t SPIDataRegister;

// SPI Registers (simulated)
volatile SPIControlRegister spiControlReg = {0};
volatile SPIStatusRegister spiStatusReg = {0};
volatile SPIDataRegister spiDataReg = 0;

// Function to initialize SPI
void SPI_Init() {
	//printf("Inside SPI Init\n");
	spiControlReg.bits.CPHA = 0;
    spiControlReg.bits.CPOL = 0;
    spiControlReg.bits.MSTR = 1;  // Master mode
    spiControlReg.bits.BR = 0x02; // Baud rate setting
    spiControlReg.bits.SPE = 1;   // Enable SPI
    spiControlReg.bits.SPIE = 0;  // Disable SPI interrupt
    printf("%0x%02X\n", spiControlReg.value);
}

// Function to write data to SPI
void SPI_Write(uint8_t data) {
    // Wait for transmit buffer to be empty
//    while (!spiStatusReg.bits.TXC);

    // Write data to SPI data register
    spiDataReg = data;

    // Simulate setting transmit complete flag
    spiStatusReg.bits.TXC = 1;
    printf("%0x%02X\n", data);
}

// Function to read data from SPI
uint8_t SPI_Read() {
    // Wait for receive complete flag
    while (!spiStatusReg.bits.RXC);

    // Read data from SPI data register
    uint8_t data = spiDataReg;

    // Simulate clearing receive complete flag
    spiStatusReg.bits.RXC = 0;

    return data;
}

int main() {
	//puts("hello");
    // Initialize SPI
    SPI_Init();

    // Write data to SPI
    SPI_Write(0x55); // Example data

    // Simulate receive complete flag set by SPI hardware
    spiStatusReg.bits.RXC = 1;

    // Read data from SPI
    uint8_t receivedData = SPI_Read();

    printf("Received Data: 0x%02X\n", receivedData);



    return 0;
}
