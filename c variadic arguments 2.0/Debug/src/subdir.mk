################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/c\ variadic\ arguments\ 2.0.c 

C_DEPS += \
./src/c\ variadic\ arguments\ 2.0.d 

OBJS += \
./src/c\ variadic\ arguments\ 2.0.o 


# Each subdirectory must supply rules for building sources it contributes
src/c\ variadic\ arguments\ 2.0.o: ../src/c\ variadic\ arguments\ 2.0.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c variadic arguments 2.0.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/c\ variadic\ arguments\ 2.0.d ./src/c\ variadic\ arguments\ 2.0.o

.PHONY: clean-src

