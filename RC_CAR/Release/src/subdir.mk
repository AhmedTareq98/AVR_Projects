################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Dio.c \
../src/Direction.c \
../src/Uart.c \
../src/main.c 

OBJS += \
./src/Dio.o \
./src/Direction.o \
./src/Uart.o \
./src/main.o 

C_DEPS += \
./src/Dio.d \
./src/Direction.d \
./src/Uart.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"F:\Embeded\ECLIPSE_PROJECTS\RC_CAR\inc" -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


