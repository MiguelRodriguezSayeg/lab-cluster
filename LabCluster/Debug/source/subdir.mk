################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../source/ADC_Driver.c \
../source/Communication.c \
../source/LabCluster.c \
../source/PWM.c \
../source/TempDriver.c \
../source/UARTDriver.c \
../source/mtb.c \
../source/semihost_hardfault.c 

OBJS += \
./source/ADC_Driver.o \
./source/Communication.o \
./source/LabCluster.o \
./source/PWM.o \
./source/TempDriver.o \
./source/UARTDriver.o \
./source/mtb.o \
./source/semihost_hardfault.o 

C_DEPS += \
./source/ADC_Driver.d \
./source/Communication.d \
./source/LabCluster.d \
./source/PWM.d \
./source/TempDriver.d \
./source/UARTDriver.d \
./source/mtb.d \
./source/semihost_hardfault.d 


# Each subdirectory must supply rules for building sources it contributes
source/%.o: ../source/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -DFSL_RTOS_BM -DSDK_OS_BAREMETAL -DSDK_DEBUGCONSOLE=0 -DCR_INTEGER_PRINTF -DPRINTF_FLOAT_ENABLE=0 -DCPU_MKL27Z64VLH4 -DCPU_MKL27Z64VLH4_cm0plus -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -D__REDLIB__ -I../board -I../source -I../ -I../drivers -I../device -I../CMSIS -I../component/uart -I../component/serial_manager -I../utilities -O0 -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -mcpu=cortex-m0plus -mthumb -D__REDLIB__ -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


