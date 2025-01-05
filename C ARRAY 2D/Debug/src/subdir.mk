################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/C\ ARRAY\ 2D.c 

C_DEPS += \
./src/C\ ARRAY\ 2D.d 

OBJS += \
./src/C\ ARRAY\ 2D.o 


# Each subdirectory must supply rules for building sources it contributes
src/C\ ARRAY\ 2D.o: ../src/C\ ARRAY\ 2D.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/C ARRAY 2D.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/C\ ARRAY\ 2D.d ./src/C\ ARRAY\ 2D.o

.PHONY: clean-src

