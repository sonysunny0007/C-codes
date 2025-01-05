################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/c\ bitfield\ embedded\ system.c 

C_DEPS += \
./src/c\ bitfield\ embedded\ system.d 

OBJS += \
./src/c\ bitfield\ embedded\ system.o 


# Each subdirectory must supply rules for building sources it contributes
src/c\ bitfield\ embedded\ system.o: ../src/c\ bitfield\ embedded\ system.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c bitfield embedded system.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/c\ bitfield\ embedded\ system.d ./src/c\ bitfield\ embedded\ system.o

.PHONY: clean-src

