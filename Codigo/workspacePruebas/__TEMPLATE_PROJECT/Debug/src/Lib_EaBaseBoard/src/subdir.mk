################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Lib_EaBaseBoard/src/acc.c \
../src/Lib_EaBaseBoard/src/eeprom.c \
../src/Lib_EaBaseBoard/src/flash.c \
../src/Lib_EaBaseBoard/src/font5x7.c \
../src/Lib_EaBaseBoard/src/joystick.c \
../src/Lib_EaBaseBoard/src/led7seg.c \
../src/Lib_EaBaseBoard/src/light.c \
../src/Lib_EaBaseBoard/src/oled.c \
../src/Lib_EaBaseBoard/src/pca9532.c \
../src/Lib_EaBaseBoard/src/rgb.c \
../src/Lib_EaBaseBoard/src/rotary.c \
../src/Lib_EaBaseBoard/src/temp.c \
../src/Lib_EaBaseBoard/src/uart2.c 

OBJS += \
./src/Lib_EaBaseBoard/src/acc.o \
./src/Lib_EaBaseBoard/src/eeprom.o \
./src/Lib_EaBaseBoard/src/flash.o \
./src/Lib_EaBaseBoard/src/font5x7.o \
./src/Lib_EaBaseBoard/src/joystick.o \
./src/Lib_EaBaseBoard/src/led7seg.o \
./src/Lib_EaBaseBoard/src/light.o \
./src/Lib_EaBaseBoard/src/oled.o \
./src/Lib_EaBaseBoard/src/pca9532.o \
./src/Lib_EaBaseBoard/src/rgb.o \
./src/Lib_EaBaseBoard/src/rotary.o \
./src/Lib_EaBaseBoard/src/temp.o \
./src/Lib_EaBaseBoard/src/uart2.o 

C_DEPS += \
./src/Lib_EaBaseBoard/src/acc.d \
./src/Lib_EaBaseBoard/src/eeprom.d \
./src/Lib_EaBaseBoard/src/flash.d \
./src/Lib_EaBaseBoard/src/font5x7.d \
./src/Lib_EaBaseBoard/src/joystick.d \
./src/Lib_EaBaseBoard/src/led7seg.d \
./src/Lib_EaBaseBoard/src/light.d \
./src/Lib_EaBaseBoard/src/oled.d \
./src/Lib_EaBaseBoard/src/pca9532.d \
./src/Lib_EaBaseBoard/src/rgb.d \
./src/Lib_EaBaseBoard/src/rotary.d \
./src/Lib_EaBaseBoard/src/temp.d \
./src/Lib_EaBaseBoard/src/uart2.d 


# Each subdirectory must supply rules for building sources it contributes
src/Lib_EaBaseBoard/src/%.o: ../src/Lib_EaBaseBoard/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DDEBUG -D__CODE_RED -D__USE_CMSIS=CMSISv2p00_LPC17xx -I"/home/fanaur/workspacePruebas/CMSISv2p00_LPC17xx/inc" -I"/home/fanaur/workspacePruebas/__TEMPLATE_PROJECT/src/APIs/inc" -I"/home/fanaur/workspacePruebas/__TEMPLATE_PROJECT/src/Lib_EaBaseBoard/inc" -I"/home/fanaur/workspacePruebas/__TEMPLATE_PROJECT/src/Lib_MCU/inc" -O0 -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


