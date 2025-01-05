################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/c\ p\ thread\ semaphopre.c 

C_DEPS += \
./src/c\ p\ thread\ semaphopre.d 

OBJS += \
./src/c\ p\ thread\ semaphopre.o 


# Each subdirectory must supply rules for building sources it contributes
src/c\ p\ thread\ semaphopre.o: ../src/c\ p\ thread\ semaphopre.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c p thread semaphopre.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/c\ p\ thread\ semaphopre.d ./src/c\ p\ thread\ semaphopre.o

.PHONY: clean-src

