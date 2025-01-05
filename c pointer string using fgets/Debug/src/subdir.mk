################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/c\ pointer\ string\ using\ fgets.c 

C_DEPS += \
./src/c\ pointer\ string\ using\ fgets.d 

OBJS += \
./src/c\ pointer\ string\ using\ fgets.o 


# Each subdirectory must supply rules for building sources it contributes
src/c\ pointer\ string\ using\ fgets.o: ../src/c\ pointer\ string\ using\ fgets.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c pointer string using fgets.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/c\ pointer\ string\ using\ fgets.d ./src/c\ pointer\ string\ using\ fgets.o

.PHONY: clean-src

