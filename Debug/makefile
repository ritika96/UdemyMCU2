################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
InputCapture.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
InputCapture.list \

OBJCOPY_BIN += \
InputCapture.bin \


# All Target
all: InputCapture.elf secondary-outputs

# Tool invocations
InputCapture.elf: $(OBJS) $(USER_OBJS) /home/ritika/Embedded\ C/Mcu2/MasteringMCU2-master/Source_codes/OpenStm32SWB/MasteringMCU2/time_base_100ms_IT/InputCapture/STM32F072RBTX_FLASH.ld
	arm-none-eabi-gcc -o "InputCapture.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m0 -T"/home/ritika/Embedded C/Mcu2/MasteringMCU2-master/Source_codes/OpenStm32SWB/MasteringMCU2/time_base_100ms_IT/InputCapture/STM32F072RBTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="InputCapture.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

InputCapture.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "InputCapture.list"
	@echo 'Finished building: $@'
	@echo ' '

InputCapture.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "InputCapture.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
