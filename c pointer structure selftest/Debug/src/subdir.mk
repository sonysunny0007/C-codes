################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/c\ pointer\ structure\ selftest.c 

C_DEPS += \
./src/c\ pointer\ structure\ selftest.d 

OBJS += \
./src/c\ pointer\ structure\ selftest.o 


# Each subdirectory must supply rules for building sources it contributes
src/c\ pointer\ structure\ selftest.o: ../src/c\ pointer\ structure\ selftest.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c pointer structure selftest.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/c\ pointer\ structure\ selftest.d ./src/c\ pointer\ structure\ selftest.o

.PHONY: clean-src

