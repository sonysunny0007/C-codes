################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/C\ macros\ and\ conditional\ compilation.c 

C_DEPS += \
./src/C\ macros\ and\ conditional\ compilation.d 

OBJS += \
./src/C\ macros\ and\ conditional\ compilation.o 


# Each subdirectory must supply rules for building sources it contributes
src/C\ macros\ and\ conditional\ compilation.o: ../src/C\ macros\ and\ conditional\ compilation.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/C macros and conditional compilation.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/C\ macros\ and\ conditional\ compilation.d ./src/C\ macros\ and\ conditional\ compilation.o

.PHONY: clean-src

