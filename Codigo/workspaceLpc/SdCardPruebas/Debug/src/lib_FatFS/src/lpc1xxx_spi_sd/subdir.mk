################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/lib_FatFS/src/lpc1xxx_spi_sd/lpc17xx_spi.c \
../src/lib_FatFS/src/lpc1xxx_spi_sd/sd.c 

OBJS += \
./src/lib_FatFS/src/lpc1xxx_spi_sd/lpc17xx_spi.o \
./src/lib_FatFS/src/lpc1xxx_spi_sd/sd.o 

C_DEPS += \
./src/lib_FatFS/src/lpc1xxx_spi_sd/lpc17xx_spi.d \
./src/lib_FatFS/src/lpc1xxx_spi_sd/sd.d 


# Each subdirectory must supply rules for building sources it contributes
src/lib_FatFS/src/lpc1xxx_spi_sd/%.o: ../src/lib_FatFS/src/lpc1xxx_spi_sd/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DDEBUG -D__CODE_RED -D__USE_CMSIS=CMSISv2p00_LPC17xx -I"/home/fanaur/RepositorioMercurial/trabajoprofesional/Codigo/workspaceLpc/CMSISv2p00_LPC17xx/inc" -I"/home/fanaur/RepositorioMercurial/trabajoprofesional/Codigo/workspaceLpc/SdCardPruebas/src/lib_FatFS/inc" -O0 -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


