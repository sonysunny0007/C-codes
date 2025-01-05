################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/C\ File\ operations\ basics.c 

C_DEPS += \
./src/C\ File\ operations\ basics.d 

OBJS += \
./src/C\ File\ operations\ basics.o 


# Each subdirectory must supply rules for building sources it contributes
src/C\ File\ operations\ basics.o: ../src/C\ File\ operations\ basics.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/C File operations basics.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/C\ File\ operations\ basics.d ./src/C\ File\ operations\ basics.o

.PHONY: clean-src

