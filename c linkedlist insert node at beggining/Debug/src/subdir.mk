################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/c\ linkedlist\ insert\ node\ at\ beggining.c 

C_DEPS += \
./src/c\ linkedlist\ insert\ node\ at\ beggining.d 

OBJS += \
./src/c\ linkedlist\ insert\ node\ at\ beggining.o 


# Each subdirectory must supply rules for building sources it contributes
src/c\ linkedlist\ insert\ node\ at\ beggining.o: ../src/c\ linkedlist\ insert\ node\ at\ beggining.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c linkedlist insert node at beggining.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/c\ linkedlist\ insert\ node\ at\ beggining.d ./src/c\ linkedlist\ insert\ node\ at\ beggining.o

.PHONY: clean-src

