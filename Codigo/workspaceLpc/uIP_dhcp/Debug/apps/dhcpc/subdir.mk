################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../apps/dhcpc/dhcpc.c 

OBJS += \
./apps/dhcpc/dhcpc.o 

C_DEPS += \
./apps/dhcpc/dhcpc.d 


# Each subdirectory must supply rules for building sources it contributes
apps/dhcpc/%.o: ../apps/dhcpc/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__USE_CMSIS=CMSISv2p00_LPC17xx -D_USE_DHCP_ -DDEBUG -D__CODE_RED -D_RDB1768_ -D__REDLIB__ -I"/home/fanaur/RepositorioMercurial/trabajoprofesional/Codigo/workspaceLpc/CMSISv2p00_LPC17xx/inc" -I"/home/fanaur/RepositorioMercurial/trabajoprofesional/Codigo/workspaceLpc/uIP_dhcp/main" -I"/home/fanaur/RepositorioMercurial/trabajoprofesional/Codigo/workspaceLpc/uIP_dhcp/main/lpc1700" -I"/home/fanaur/RepositorioMercurial/trabajoprofesional/Codigo/workspaceLpc/uIP_dhcp/uip" -I"/home/fanaur/RepositorioMercurial/trabajoprofesional/Codigo/workspaceLpc/uIP_dhcp/apps/webserver" -I"/home/fanaur/RepositorioMercurial/trabajoprofesional/Codigo/workspaceLpc/uIP_dhcp/apps/dhcpc" -O0 -g3 -c -fmessage-length=0 -fno-builtin -ffunction-sections -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


