################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/FatFS_support.c \
../src/cr_startup_lpc176x.c \
../src/main.c 

OBJS += \
./src/FatFS_support.o \
./src/cr_startup_lpc176x.o \
./src/main.o 

C_DEPS += \
./src/FatFS_support.d \
./src/cr_startup_lpc176x.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DDEBUG -D__CODE_RED -D__USE_CMSIS=CMSISv2p00_LPC17xx -I"C:\Users\rob\Documents\LPCXpresso-workspaces\FatFS-test\CMSISv2p00_LPC17xx\inc" -I"C:\Users\rob\Documents\LPCXpresso-workspaces\FatFS-test\lib_mcu\inc" -I"C:\Users\rob\Documents\LPCXpresso-workspaces\FatFS-test\lib_small_printf\inc" -I"C:\Users\rob\Documents\LPCXpresso-workspaces\FatFS-test\lib_FatFS\inc" -O0 -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/cr_startup_lpc176x.o: ../src/cr_startup_lpc176x.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DDEBUG -D__CODE_RED -D__USE_CMSIS=CMSISv2p00_LPC17xx -I"C:\Users\rob\Documents\LPCXpresso-workspaces\FatFS-test\CMSISv2p00_LPC17xx\inc" -I"C:\Users\rob\Documents\LPCXpresso-workspaces\FatFS-test\lib_mcu\inc" -I"C:\Users\rob\Documents\LPCXpresso-workspaces\FatFS-test\lib_small_printf\inc" -I"C:\Users\rob\Documents\LPCXpresso-workspaces\FatFS-test\lib_FatFS\inc" -O0 -Os -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"src/cr_startup_lpc176x.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


