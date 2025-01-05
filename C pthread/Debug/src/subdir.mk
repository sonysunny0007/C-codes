################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/C\ pthread.c 

C_DEPS += \
./src/C\ pthread.d 

OBJS += \
./src/C\ pthread.o 


# Each subdirectory must supply rules for building sources it contributes
src/C\ pthread.o: ../src/C\ pthread.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/C pthread.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/C\ pthread.d ./src/C\ pthread.o

.PHONY: clean-src

