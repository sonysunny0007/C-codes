################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/c\ memmory\ allocation.c 

C_DEPS += \
./src/c\ memmory\ allocation.d 

OBJS += \
./src/c\ memmory\ allocation.o 


# Each subdirectory must supply rules for building sources it contributes
src/c\ memmory\ allocation.o: ../src/c\ memmory\ allocation.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c memmory allocation.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/c\ memmory\ allocation.d ./src/c\ memmory\ allocation.o

.PHONY: clean-src

