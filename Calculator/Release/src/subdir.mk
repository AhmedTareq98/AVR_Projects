################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Dio.c \
../src/Keypad.c \
../src/Lcd.c \
../src/Lcd_PbCfg.c \
../src/main.c 

OBJS += \
./src/Dio.o \
./src/Keypad.o \
./src/Lcd.o \
./src/Lcd_PbCfg.o \
./src/main.o 

C_DEPS += \
./src/Dio.d \
./src/Keypad.d \
./src/Lcd.d \
./src/Lcd_PbCfg.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"F:\Embeded\ECLIPSE_PROJECTS\Calculator\inc" -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


