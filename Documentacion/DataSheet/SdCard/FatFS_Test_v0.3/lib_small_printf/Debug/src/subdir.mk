################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/small_printf_nofloat.c \
../src/small_printf_support.c \
../src/small_utils.c 

OBJS += \
./src/small_printf_nofloat.o \
./src/small_printf_support.o \
./src/small_utils.o 

C_DEPS += \
./src/small_printf_nofloat.d \
./src/small_printf_support.d \
./src/small_utils.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DDEBUG -D__CODE_RED -D__USE_CMSIS=CMSISv2p00_LPC17xx -I"C:\Users\rob\Documents\LPCXpresso-workspaces\FatFS-test\lib_small_printf\inc" -I"C:\Users\rob\Documents\LPCXpresso-workspaces\FatFS-test\CMSISv2p00_LPC17xx\inc" -O0 -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


