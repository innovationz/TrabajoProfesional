################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/clocking.c \
../src/i2c.c \
../src/uart.c 

OBJS += \
./src/clocking.o \
./src/i2c.o \
./src/uart.o 

C_DEPS += \
./src/clocking.d \
./src/i2c.d \
./src/uart.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DDEBUG -D__CODE_RED -D__USE_CMSIS=CMSISv2p00_LPC17xx -I"C:\Users\rob\Documents\LPCXpresso-workspaces\FatFS-test\lib_mcu\inc" -I"C:\Users\rob\Documents\LPCXpresso-workspaces\FatFS-test\CMSISv2p00_LPC17xx\inc" -O0 -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


