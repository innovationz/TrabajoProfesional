################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/lib_FatFS/src/clocking.c \
../src/lib_FatFS/src/ff.c 

OBJS += \
./src/lib_FatFS/src/clocking.o \
./src/lib_FatFS/src/ff.o 

C_DEPS += \
./src/lib_FatFS/src/clocking.d \
./src/lib_FatFS/src/ff.d 


# Each subdirectory must supply rules for building sources it contributes
src/lib_FatFS/src/%.o: ../src/lib_FatFS/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DDEBUG -D__CODE_RED -D__USE_CMSIS=CMSISv2p00_LPC17xx -I"/home/fanaur/RepositorioMercurial/trabajoprofesional/Codigo/workspaceLpc/CMSISv2p00_LPC17xx/inc" -I"/home/fanaur/RepositorioMercurial/trabajoprofesional/Codigo/workspaceLpc/SdCardPruebas/src/lib_FatFS/inc" -O0 -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


