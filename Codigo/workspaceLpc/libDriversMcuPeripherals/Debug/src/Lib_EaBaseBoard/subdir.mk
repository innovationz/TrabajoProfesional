################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Lib_EaBaseBoard/acc.c \
../src/Lib_EaBaseBoard/eeprom.c \
../src/Lib_EaBaseBoard/flash.c \
../src/Lib_EaBaseBoard/font5x7.c \
../src/Lib_EaBaseBoard/joystick.c \
../src/Lib_EaBaseBoard/led7seg.c \
../src/Lib_EaBaseBoard/light.c \
../src/Lib_EaBaseBoard/oled.c \
../src/Lib_EaBaseBoard/pca9532.c \
../src/Lib_EaBaseBoard/rgb.c \
../src/Lib_EaBaseBoard/rotary.c \
../src/Lib_EaBaseBoard/temp.c \
../src/Lib_EaBaseBoard/uart2.c 

OBJS += \
./src/Lib_EaBaseBoard/acc.o \
./src/Lib_EaBaseBoard/eeprom.o \
./src/Lib_EaBaseBoard/flash.o \
./src/Lib_EaBaseBoard/font5x7.o \
./src/Lib_EaBaseBoard/joystick.o \
./src/Lib_EaBaseBoard/led7seg.o \
./src/Lib_EaBaseBoard/light.o \
./src/Lib_EaBaseBoard/oled.o \
./src/Lib_EaBaseBoard/pca9532.o \
./src/Lib_EaBaseBoard/rgb.o \
./src/Lib_EaBaseBoard/rotary.o \
./src/Lib_EaBaseBoard/temp.o \
./src/Lib_EaBaseBoard/uart2.o 

C_DEPS += \
./src/Lib_EaBaseBoard/acc.d \
./src/Lib_EaBaseBoard/eeprom.d \
./src/Lib_EaBaseBoard/flash.d \
./src/Lib_EaBaseBoard/font5x7.d \
./src/Lib_EaBaseBoard/joystick.d \
./src/Lib_EaBaseBoard/led7seg.d \
./src/Lib_EaBaseBoard/light.d \
./src/Lib_EaBaseBoard/oled.d \
./src/Lib_EaBaseBoard/pca9532.d \
./src/Lib_EaBaseBoard/rgb.d \
./src/Lib_EaBaseBoard/rotary.d \
./src/Lib_EaBaseBoard/temp.d \
./src/Lib_EaBaseBoard/uart2.d 


# Each subdirectory must supply rules for building sources it contributes
src/Lib_EaBaseBoard/%.o: ../src/Lib_EaBaseBoard/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DDEBUG -D__CODE_RED -D__USE_CMSIS=CMSISv2p00_LPC17xx -I"/home/fanaur/RepositoriosMercurial/trabajoprofesional/Codigo/workspaceLpc/libDriversMcuPeripherals/inc" -I"/home/fanaur/RepositoriosMercurial/trabajoprofesional/Codigo/workspaceLpc/libDriversMcuPeripherals/inc/Lib_MCU" -I"/home/fanaur/RepositoriosMercurial/trabajoprofesional/Codigo/workspaceLpc/libDriversMcuPeripherals/inc/Lib_EaBaseBoard" -I"/home/fanaur/RepositoriosMercurial/trabajoprofesional/Codigo/workspaceLpc/CMSISv2p00_LPC17xx/inc" -O0 -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


