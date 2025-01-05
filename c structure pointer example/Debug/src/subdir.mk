################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/c\ structure\ pointer\ example.c 

C_DEPS += \
./src/c\ structure\ pointer\ example.d 

OBJS += \
./src/c\ structure\ pointer\ example.o 


# Each subdirectory must supply rules for building sources it contributes
src/c\ structure\ pointer\ example.o: ../src/c\ structure\ pointer\ example.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c structure pointer example.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/c\ structure\ pointer\ example.d ./src/c\ structure\ pointer\ example.o

.PHONY: clean-src

