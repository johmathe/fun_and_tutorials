################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../src/line.cc \
../src/line_test.cc \
../src/main.cc \
../src/point.cc 

OBJS += \
./src/line.o \
./src/line_test.o \
./src/main.o \
./src/point.o 

CC_DEPS += \
./src/line.d \
./src/line_test.d \
./src/main.d \
./src/point.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


