################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/c\ string\ parser\ using\ pointer.c 

C_DEPS += \
./src/c\ string\ parser\ using\ pointer.d 

OBJS += \
./src/c\ string\ parser\ using\ pointer.o 


# Each subdirectory must supply rules for building sources it contributes
src/c\ string\ parser\ using\ pointer.o: ../src/c\ string\ parser\ using\ pointer.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c string parser using pointer.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/c\ string\ parser\ using\ pointer.d ./src/c\ string\ parser\ using\ pointer.o

.PHONY: clean-src

