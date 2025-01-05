################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/c\ bitfields\ basics.c 

C_DEPS += \
./src/c\ bitfields\ basics.d 

OBJS += \
./src/c\ bitfields\ basics.o 


# Each subdirectory must supply rules for building sources it contributes
src/c\ bitfields\ basics.o: ../src/c\ bitfields\ basics.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c bitfields basics.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/c\ bitfields\ basics.d ./src/c\ bitfields\ basics.o

.PHONY: clean-src

