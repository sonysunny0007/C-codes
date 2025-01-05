################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/linkedlist\ in\ embedded\ systems.c 

C_DEPS += \
./src/linkedlist\ in\ embedded\ systems.d 

OBJS += \
./src/linkedlist\ in\ embedded\ systems.o 


# Each subdirectory must supply rules for building sources it contributes
src/linkedlist\ in\ embedded\ systems.o: ../src/linkedlist\ in\ embedded\ systems.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/linkedlist in embedded systems.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/linkedlist\ in\ embedded\ systems.d ./src/linkedlist\ in\ embedded\ systems.o

.PHONY: clean-src

