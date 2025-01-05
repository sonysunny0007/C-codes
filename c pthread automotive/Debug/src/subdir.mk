################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/c\ pthread\ automotive.c 

C_DEPS += \
./src/c\ pthread\ automotive.d 

OBJS += \
./src/c\ pthread\ automotive.o 


# Each subdirectory must supply rules for building sources it contributes
src/c\ pthread\ automotive.o: ../src/c\ pthread\ automotive.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c pthread automotive.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/c\ pthread\ automotive.d ./src/c\ pthread\ automotive.o

.PHONY: clean-src

