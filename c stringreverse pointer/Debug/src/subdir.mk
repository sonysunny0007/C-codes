################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/c\ stringreverse\ pointer.c 

C_DEPS += \
./src/c\ stringreverse\ pointer.d 

OBJS += \
./src/c\ stringreverse\ pointer.o 


# Each subdirectory must supply rules for building sources it contributes
src/c\ stringreverse\ pointer.o: ../src/c\ stringreverse\ pointer.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c stringreverse pointer.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/c\ stringreverse\ pointer.d ./src/c\ stringreverse\ pointer.o

.PHONY: clean-src

