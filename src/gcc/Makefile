################################################################################
# Automatically-generated file. Do not edit!
################################################################################

ifdef SystemRoot
	SHELL = cmd.exe
	MK_DIR = mkdir
else
	
	ifeq ($(shell uname), Darwin)
		MK_DIR = mkdir -p
	endif
	
	ifeq ($(shell uname), Linux)
		MK_DIR = mkdir -p
	endif

	ifeq ($(shell uname | cut -d _ -f 1), CYGWIN)
		MK_DIR = mkdir -p
	endif

	ifeq ($(shell uname | cut -d _ -f 1), MINGW32)
		MK_DIR = mkdir -p
	endif

	ifeq ($(shell uname | cut -d _ -f 1), MINGW64)
		MK_DIR = mkdir -p
	endif

	ifeq ($(shell uname | cut -d _ -f 1), DARWIN)
		MK_DIR = mkdir -p
	endif
endif

# List the subdirectories for creating object files
SUB_DIRS +=  \
 \
hpl/usb \
usb/class/cdc/device \
usb/device \
hpl/dmac \
dma_m2m \
hal/src \
hal/utils/src \
samd21a/gcc \
hpl/pm \
hpl/sysctrl \
hpl/eic \
examples \
hpl/gclk \
samd21a/gcc/gcc \
hpl/wdt \
hpl/core \
usb

# List the object files
OBJS +=  \
hal/src/hal_io.o \
hpl/wdt/hpl_wdt.o \
samd21a/gcc/gcc/startup_samd21.o \
hpl/eic/hpl_eic.o \
usb/class/cdc/device/cdcdf_acm.o \
hal/utils/src/utils_syscalls.o \
samd21a/gcc/system_samd21.o \
hpl/usb/hpl_usb.o \
dma_m2m/dma_memory.o \
hal/src/hal_delay.o \
hpl/pm/hpl_pm.o \
hpl/core/hpl_init.o \
hal/src/hal_wdt.o \
hpl/core/hpl_core_m0plus_base.o \
hal/utils/src/utils_assert.o \
usb_start.o \
hpl/sysctrl/hpl_sysctrl.o \
hpl/gclk/hpl_gclk.o \
usb/usb_protocol.o \
hal/src/hal_init.o \
hal/src/hal_usb_device.o \
dma_m2m_main.o \
hal/utils/src/utils_list.o \
examples/driver_examples.o \
driver_init.o \
hal/src/hal_ext_irq.o \
main.o \
hal/src/hal_gpio.o \
hal/utils/src/utils_event.o \
hal/src/hal_sleep.o \
hpl/dmac/hpl_dmac.o \
atmel_start.o \
usb/device/usbdc.o \
hal/src/hal_atomic.o

OBJS_AS_ARGS +=  \
"hal/src/hal_io.o" \
"hpl/wdt/hpl_wdt.o" \
"samd21a/gcc/gcc/startup_samd21.o" \
"hpl/eic/hpl_eic.o" \
"usb/class/cdc/device/cdcdf_acm.o" \
"hal/utils/src/utils_syscalls.o" \
"samd21a/gcc/system_samd21.o" \
"hpl/usb/hpl_usb.o" \
"dma_m2m/dma_memory.o" \
"hal/src/hal_delay.o" \
"hpl/pm/hpl_pm.o" \
"hpl/core/hpl_init.o" \
"hal/src/hal_wdt.o" \
"hpl/core/hpl_core_m0plus_base.o" \
"hal/utils/src/utils_assert.o" \
"usb_start.o" \
"hpl/sysctrl/hpl_sysctrl.o" \
"hpl/gclk/hpl_gclk.o" \
"usb/usb_protocol.o" \
"hal/src/hal_init.o" \
"hal/src/hal_usb_device.o" \
"dma_m2m_main.o" \
"hal/utils/src/utils_list.o" \
"examples/driver_examples.o" \
"driver_init.o" \
"hal/src/hal_ext_irq.o" \
"main.o" \
"hal/src/hal_gpio.o" \
"hal/utils/src/utils_event.o" \
"hal/src/hal_sleep.o" \
"hpl/dmac/hpl_dmac.o" \
"atmel_start.o" \
"usb/device/usbdc.o" \
"hal/src/hal_atomic.o"

# List the directories containing header files
DIR_INCLUDES +=  \
-I"../" \
-I"../config" \
-I"../examples" \
-I"../hal/include" \
-I"../hal/utils/include" \
-I"../hpl/core" \
-I"../hpl/dmac" \
-I"../hpl/eic" \
-I"../hpl/gclk" \
-I"../hpl/pm" \
-I"../hpl/port" \
-I"../hpl/sysctrl" \
-I"../hpl/usb" \
-I"../hpl/wdt" \
-I"../hri" \
-I"../" \
-I"../config" \
-I"../usb" \
-I"../usb/class/cdc" \
-I"../usb/class/cdc/device" \
-I"../usb/device" \
-I"../" \
-I"../dma_m2m" \
-I"../" \
-I"../CMSIS/Core/Include" \
-I"../samd21a/include"

# List the dependency files
DEPS := $(OBJS:%.o=%.d)

DEPS_AS_ARGS +=  \
"samd21a/gcc/gcc/startup_samd21.d" \
"dma_m2m/dma_memory.d" \
"hpl/wdt/hpl_wdt.d" \
"hal/utils/src/utils_event.d" \
"hal/src/hal_io.d" \
"hpl/eic/hpl_eic.d" \
"hal/utils/src/utils_syscalls.d" \
"usb/class/cdc/device/cdcdf_acm.d" \
"hpl/usb/hpl_usb.d" \
"main.d" \
"hpl/core/hpl_core_m0plus_base.d" \
"hal/src/hal_wdt.d" \
"usb_start.d" \
"hal/utils/src/utils_assert.d" \
"hal/src/hal_delay.d" \
"hpl/core/hpl_init.d" \
"hpl/sysctrl/hpl_sysctrl.d" \
"usb/usb_protocol.d" \
"hpl/gclk/hpl_gclk.d" \
"hal/src/hal_usb_device.d" \
"hpl/dmac/hpl_dmac.d" \
"hal/src/hal_init.d" \
"driver_init.d" \
"samd21a/gcc/system_samd21.d" \
"dma_m2m_main.d" \
"examples/driver_examples.d" \
"hal/utils/src/utils_list.d" \
"hal/src/hal_sleep.d" \
"hal/src/hal_ext_irq.d" \
"hal/src/hal_gpio.d" \
"hal/src/hal_atomic.d" \
"usb/device/usbdc.d" \
"hpl/pm/hpl_pm.d" \
"atmel_start.d"

OUTPUT_FILE_NAME :=AtmelStart
QUOTE := "
OUTPUT_FILE_PATH +=$(OUTPUT_FILE_NAME).elf
OUTPUT_FILE_PATH_AS_ARGS +=$(OUTPUT_FILE_NAME).elf

vpath %.c ../
vpath %.s ../
vpath %.S ../

# All Target
all: $(SUB_DIRS) $(OUTPUT_FILE_PATH)

# Linker target

$(OUTPUT_FILE_PATH): $(OBJS)
	@echo Building target: $@
	@echo Invoking: ARM/GNU Linker
	$(QUOTE)arm-none-eabi-gcc$(QUOTE) -o $(OUTPUT_FILE_NAME).elf $(OBJS_AS_ARGS) -Wl,--start-group -lm -Wl,--end-group -mthumb \
-Wl,-Map="$(OUTPUT_FILE_NAME).map" --specs=nano.specs -Wl,--gc-sections -mcpu=cortex-m0plus \
 \
-T"../samd21a/gcc/gcc/samd21e18a_flash.ld" \
-L"../samd21a/gcc/gcc"
	@echo Finished building target: $@

	"arm-none-eabi-objcopy" -O binary "$(OUTPUT_FILE_NAME).elf" "$(OUTPUT_FILE_NAME).bin"
	"arm-none-eabi-objcopy" -O ihex -R .eeprom -R .fuse -R .lock -R .signature  \
        "$(OUTPUT_FILE_NAME).elf" "$(OUTPUT_FILE_NAME).hex"
	"arm-none-eabi-objcopy" -j .eeprom --set-section-flags=.eeprom=alloc,load --change-section-lma \
        .eeprom=0 --no-change-warnings -O binary "$(OUTPUT_FILE_NAME).elf" \
        "$(OUTPUT_FILE_NAME).eep" || exit 0
	"arm-none-eabi-objdump" -h -S "$(OUTPUT_FILE_NAME).elf" > "$(OUTPUT_FILE_NAME).lss"
	"arm-none-eabi-size" "$(OUTPUT_FILE_NAME).elf"

	

# Compiler targets




%.o: %.c
	@echo Building file: $<
	@echo ARM/GNU C Compiler
	$(QUOTE)arm-none-eabi-gcc$(QUOTE) -x c -mthumb -DDEBUG -Os -ffunction-sections -mlong-calls -g3 -Wall -c -std=gnu99 \
-D__SAMD21E18A__ -mcpu=cortex-m0plus  \
$(DIR_INCLUDES) \
-MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -o "$@" "$<"
	@echo Finished building: $<

%.o: %.s
	@echo Building file: $<
	@echo ARM/GNU Assembler
	$(QUOTE)arm-none-eabi-as$(QUOTE) -x c -mthumb -DDEBUG -Os -ffunction-sections -mlong-calls -g3 -Wall -c -std=gnu99 \
-D__SAMD21E18A__ -mcpu=cortex-m0plus  \
$(DIR_INCLUDES) \
-MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -o "$@" "$<"
	@echo Finished building: $<

%.o: %.S
	@echo Building file: $<
	@echo ARM/GNU Preprocessing Assembler
	$(QUOTE)arm-none-eabi-gcc$(QUOTE) -x c -mthumb -DDEBUG -Os -ffunction-sections -mlong-calls -g3 -Wall -c -std=gnu99 \
-D__SAMD21E18A__ -mcpu=cortex-m0plus  \
$(DIR_INCLUDES) \
-MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -o "$@" "$<"
	@echo Finished building: $<

# Detect changes in the dependent files and recompile the respective object files.
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(DEPS)),)
-include $(DEPS)
endif
endif

$(SUB_DIRS):
	$(MK_DIR) "$@"

clean:
	rm -f $(OBJS_AS_ARGS)
	rm -f $(OUTPUT_FILE_PATH)
	rm -f $(DEPS_AS_ARGS)
	rm -f $(OUTPUT_FILE_NAME).a $(OUTPUT_FILE_NAME).hex $(OUTPUT_FILE_NAME).bin \
        $(OUTPUT_FILE_NAME).lss $(OUTPUT_FILE_NAME).eep $(OUTPUT_FILE_NAME).map \
        $(OUTPUT_FILE_NAME).srec
