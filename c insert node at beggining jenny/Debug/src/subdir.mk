################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/c\ insert\ node\ at\ beggining\ jenny.c 

C_DEPS += \
./src/c\ insert\ node\ at\ beggining\ jenny.d 

OBJS += \
./src/c\ insert\ node\ at\ beggining\ jenny.o 


# Each subdirectory must supply rules for building sources it contributes
src/c\ insert\ node\ at\ beggining\ jenny.o: ../src/c\ insert\ node\ at\ beggining\ jenny.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c insert node at beggining jenny.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/c\ insert\ node\ at\ beggining\ jenny.d ./src/c\ insert\ node\ at\ beggining\ jenny.o

.PHONY: clean-src

