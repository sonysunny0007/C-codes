################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/c\ pthread\ mutex.c 

C_DEPS += \
./src/c\ pthread\ mutex.d 

OBJS += \
./src/c\ pthread\ mutex.o 


# Each subdirectory must supply rules for building sources it contributes
src/c\ pthread\ mutex.o: ../src/c\ pthread\ mutex.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c pthread mutex.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/c\ pthread\ mutex.d ./src/c\ pthread\ mutex.o

.PHONY: clean-src

