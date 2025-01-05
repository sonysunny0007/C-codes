################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/c\ pointer\ string.c 

C_DEPS += \
./src/c\ pointer\ string.d 

OBJS += \
./src/c\ pointer\ string.o 


# Each subdirectory must supply rules for building sources it contributes
src/c\ pointer\ string.o: ../src/c\ pointer\ string.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c pointer string.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/c\ pointer\ string.d ./src/c\ pointer\ string.o

.PHONY: clean-src

