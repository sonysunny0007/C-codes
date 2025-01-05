################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/c\ array\ 2d\ sum.c 

C_DEPS += \
./src/c\ array\ 2d\ sum.d 

OBJS += \
./src/c\ array\ 2d\ sum.o 


# Each subdirectory must supply rules for building sources it contributes
src/c\ array\ 2d\ sum.o: ../src/c\ array\ 2d\ sum.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c array 2d sum.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/c\ array\ 2d\ sum.d ./src/c\ array\ 2d\ sum.o

.PHONY: clean-src

