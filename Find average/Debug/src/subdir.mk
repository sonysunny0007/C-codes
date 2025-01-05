################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Find\ average.c 

C_DEPS += \
./src/Find\ average.d 

OBJS += \
./src/Find\ average.o 


# Each subdirectory must supply rules for building sources it contributes
src/Find\ average.o: ../src/Find\ average.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Find average.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Find\ average.d ./src/Find\ average.o

.PHONY: clean-src

