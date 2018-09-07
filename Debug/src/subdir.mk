################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/data_transmission.c \
../src/main.c \
../src/syscalls.c \
../src/system_stm32f4xx.c \
../src/uart_protocol.c 

OBJS += \
./src/data_transmission.o \
./src/main.o \
./src/syscalls.o \
./src/system_stm32f4xx.o \
./src/uart_protocol.o 

C_DEPS += \
./src/data_transmission.d \
./src/main.d \
./src/syscalls.d \
./src/system_stm32f4xx.d \
./src/uart_protocol.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DSTM32 -DSTM32F4 -DSTM32F411VETx -DSTM32F411E_DISCO -DDEBUG -DSTM32F411xE -DUSE_STDPERIPH_DRIVER -I"D:/github/RogerRoger_STM32/StdPeriph_Driver/inc" -I"D:/github/RogerRoger_STM32/inc" -I"D:/github/RogerRoger_STM32/CMSIS/device" -I"D:/github/RogerRoger_STM32/CMSIS/core" -I"D:/Program Files/Ac6/plugins/fr.ac6.mcu.externaltools.arm-none.win32_1.15.0.201708311556/tools/compiler/arm-none-eabi/include D:/Program Files/Ac6/plugins/fr.ac6.mcu.externaltools.arm-none.win32_1.16.0.201807130628/tools/compiler/bin D:/Program Files/Ac6/plugins/fr.ac6.mcu.externaltools.arm-none.win32_1.16.0.201807130628/tools/make D:/Program Files/Ac6/jre/bin/server D:/Program Files/Ac6/jre/bin D:/Program Files/Ac6/jre/lib/amd64 C:/Program Files (x86)/Common Files/Oracle/Java/javapath C:/Windows/system32 C:/Windows C:/Windows/System32/Wbem C:/Windows/System32/WindowsPowerShell/v1.0/ C:/Program Files (x86)/NVIDIA Corporation/PhysX/Common C:/Program Files/Git/cmd C:/WINDOWS/system32 C:/WINDOWS C:/WINDOWS/System32/Wbem C:/WINDOWS/System32/WindowsPowerShell/v1.0/ C:/WINDOWS/System32/OpenSSH/ D:/Program Files/PuTTY/ C:/Program Files (x86)/STMicroelectronics/STM32 ST-LINK Utility/ST-LINK Utility D:/Program Files/Microsoft VS Code/bin C:/Users/Fisiel/AppData/Local/Programs/Python/Python35/Scripts/ C:/Users/Fisiel/AppData/Local/Programs/Python/Python35/ C:/Users/Fisiel/AppData/Local/Microsoft/WindowsApps D:/Program Files/Microsoft VS Code/bin D:/Program Files/Ac6D:/Program Files/Ac6/jre/bin/server D:/Program Files/Ac6/jre/bin D:/Program Files/Ac6/jre/lib/amd64 C:/Program Files (x86)/Common Files/Oracle/Java/javapath C:/Windows/system32 C:/Windows C:/Windows/System32/Wbem C:/Windows/System32/WindowsPowerShell/v1.0/ C:/Program Files (x86)/NVIDIA Corporation/PhysX/Common C:/Program Files/Git/cmd C:/WINDOWS/system32 C:/WINDOWS C:/WINDOWS/System32/Wbem C:/WINDOWS/System32/WindowsPowerShell/v1.0/ C:/WINDOWS/System32/OpenSSH/ D:/Program Files/PuTTY/ C:/Program Files (x86)/STMicroelectronics/STM32 ST-LINK Utility/ST-LINK Utility D:/Program Files/Microsoft VS Code/bin C:/Program Files (x86)/GNU Tools Arm Embedded/7 2018-q2-update/bin C:/Users/Fisiel/AppData/Local/Programs/Python/Python35/Scripts/ C:/Users/Fisiel/AppData/Local/Programs/Python/Python35/ C:/Users/Fisiel/AppData/Local/Microsoft/WindowsApps D:/Program Files/Microsoft VS Code/bin D:/Program Files/Ac6" -O0 -g3 -Wall -fmessage-length=0 -ffunction-sections -c -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


