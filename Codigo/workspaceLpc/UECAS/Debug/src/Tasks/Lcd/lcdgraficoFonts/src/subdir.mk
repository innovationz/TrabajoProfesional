################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Tasks/Lcd/lcdgraficoFonts/src/lcd.c \
../src/Tasks/Lcd/lcdgraficoFonts/src/lcd_buffer.c \
../src/Tasks/Lcd/lcdgraficoFonts/src/main.c 

OBJS += \
./src/Tasks/Lcd/lcdgraficoFonts/src/lcd.o \
./src/Tasks/Lcd/lcdgraficoFonts/src/lcd_buffer.o \
./src/Tasks/Lcd/lcdgraficoFonts/src/main.o 

C_DEPS += \
./src/Tasks/Lcd/lcdgraficoFonts/src/lcd.d \
./src/Tasks/Lcd/lcdgraficoFonts/src/lcd_buffer.d \
./src/Tasks/Lcd/lcdgraficoFonts/src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/Tasks/Lcd/lcdgraficoFonts/src/%.o: ../src/Tasks/Lcd/lcdgraficoFonts/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DDEBUG -D__CODE_RED -DPACK_STRUCT_END=__attribute\(\(packed\)\) -DGCC_ARMCM3 -I"/home/fsilva/RepositorioMercurial/trabajoprofesional/Codigo/workspaceLpc/CMSISv2p00_LPC17xx/inc" -I"/home/fsilva/RepositorioMercurial/trabajoprofesional/Codigo/workspaceLpc/UECAS/src/Tasks/SdCard/lib_FatFS/inc" -I"/home/fsilva/RepositorioMercurial/trabajoprofesional/Codigo/workspaceLpc/UECAS/src/Tasks/SdCard" -I"/home/fsilva/RepositorioMercurial/trabajoprofesional/Codigo/workspaceLpc/UECAS/src/Tasks/Adc" -I"/home/fsilva/RepositorioMercurial/trabajoprofesional/Codigo/workspaceLpc/libDriversMcuPeripherals/inc/Lib_MCU" -I"/home/fsilva/RepositorioMercurial/trabajoprofesional/Codigo/workspaceLpc/libDriversMcuPeripherals/inc/Lib_EaBaseBoard" -I"/home/fsilva/RepositorioMercurial/trabajoprofesional/Codigo/workspaceLpc/UECAS/src" -I"/home/fsilva/RepositorioMercurial/trabajoprofesional/Codigo/workspaceLpc/UECAS/src/Tasks" -I"/home/fsilva/RepositorioMercurial/trabajoprofesional/Codigo/workspaceLpc/UECAS/FreeRTOS_include" -I"/home/fsilva/RepositorioMercurial/trabajoprofesional/Codigo/workspaceLpc/UECAS/FreeRTOS_portable" -O0 -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


