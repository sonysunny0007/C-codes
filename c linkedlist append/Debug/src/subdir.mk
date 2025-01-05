################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/c\ linkedlist\ append.c 

C_DEPS += \
./src/c\ linkedlist\ append.d 

OBJS += \
./src/c\ linkedlist\ append.o 


# Each subdirectory must supply rules for building sources it contributes
src/c\ linkedlist\ append.o: ../src/c\ linkedlist\ append.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c linkedlist append.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/c\ linkedlist\ append.d ./src/c\ linkedlist\ append.o

.PHONY: clean-src

