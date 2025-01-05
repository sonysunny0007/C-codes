################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/c\ networking\ basics\ sample.c 

C_DEPS += \
./src/c\ networking\ basics\ sample.d 

OBJS += \
./src/c\ networking\ basics\ sample.o 


# Each subdirectory must supply rules for building sources it contributes
src/c\ networking\ basics\ sample.o: ../src/c\ networking\ basics\ sample.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c networking basics sample.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/c\ networking\ basics\ sample.d ./src/c\ networking\ basics\ sample.o

.PHONY: clean-src

