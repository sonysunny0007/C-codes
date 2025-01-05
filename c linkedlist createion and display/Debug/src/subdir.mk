################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/c\ linkedlist\ createion\ and\ display.c 

C_DEPS += \
./src/c\ linkedlist\ createion\ and\ display.d 

OBJS += \
./src/c\ linkedlist\ createion\ and\ display.o 


# Each subdirectory must supply rules for building sources it contributes
src/c\ linkedlist\ createion\ and\ display.o: ../src/c\ linkedlist\ createion\ and\ display.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c linkedlist createion and display.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/c\ linkedlist\ createion\ and\ display.d ./src/c\ linkedlist\ createion\ and\ display.o

.PHONY: clean-src

