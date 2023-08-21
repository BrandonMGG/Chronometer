/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'CPU' in SOPC Builder design 'platform'
 * SOPC Builder design path: ../../platform.sopcinfo
 *
 * Generated: Sun Aug 20 20:40:15 CST 2023
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00004020
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0xf
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x00004020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 0
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0xf
#define ALT_CPU_NAME "CPU"
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x00004000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00004020
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0xf
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x00004020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 0
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0xf
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x00004000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_TIMER
#define __ALTERA_NIOS2_GEN2


/*
 * RAM configuration
 *
 */

#define ALT_MODULE_CLASS_RAM altera_avalon_onchip_memory2
#define RAM_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define RAM_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define RAM_BASE 0x0
#define RAM_CONTENTS_INFO ""
#define RAM_DUAL_PORT 0
#define RAM_GUI_RAM_BLOCK_TYPE "AUTO"
#define RAM_INIT_CONTENTS_FILE "platform_RAM"
#define RAM_INIT_MEM_CONTENT 1
#define RAM_INSTANCE_ID "NONE"
#define RAM_IRQ -1
#define RAM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define RAM_NAME "/dev/RAM"
#define RAM_NON_DEFAULT_INIT_FILE_ENABLED 0
#define RAM_RAM_BLOCK_TYPE "AUTO"
#define RAM_READ_DURING_WRITE_MODE "DONT_CARE"
#define RAM_SINGLE_CLOCK_OP 0
#define RAM_SIZE_MULTIPLE 1
#define RAM_SIZE_VALUE 16384
#define RAM_SPAN 16384
#define RAM_TYPE "altera_avalon_onchip_memory2"
#define RAM_WRITABLE 1


/*
 * ROM configuration
 *
 */

#define ALT_MODULE_CLASS_ROM altera_avalon_onchip_memory2
#define ROM_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ROM_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ROM_BASE 0x4000
#define ROM_CONTENTS_INFO ""
#define ROM_DUAL_PORT 0
#define ROM_GUI_RAM_BLOCK_TYPE "AUTO"
#define ROM_INIT_CONTENTS_FILE "platform_ROM"
#define ROM_INIT_MEM_CONTENT 1
#define ROM_INSTANCE_ID "NONE"
#define ROM_IRQ -1
#define ROM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ROM_NAME "/dev/ROM"
#define ROM_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ROM_RAM_BLOCK_TYPE "AUTO"
#define ROM_READ_DURING_WRITE_MODE "DONT_CARE"
#define ROM_SINGLE_CLOCK_OP 0
#define ROM_SIZE_MULTIPLE 1
#define ROM_SIZE_VALUE 4096
#define ROM_SPAN 4096
#define ROM_TYPE "altera_avalon_onchip_memory2"
#define ROM_WRITABLE 0


/*
 * SWITCH configuration
 *
 */

#define ALT_MODULE_CLASS_SWITCH altera_avalon_pio
#define SWITCH_BASE 0x5080
#define SWITCH_BIT_CLEARING_EDGE_REGISTER 0
#define SWITCH_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SWITCH_CAPTURE 0
#define SWITCH_DATA_WIDTH 1
#define SWITCH_DO_TEST_BENCH_WIRING 0
#define SWITCH_DRIVEN_SIM_VALUE 0
#define SWITCH_EDGE_TYPE "NONE"
#define SWITCH_FREQ 50000000
#define SWITCH_HAS_IN 1
#define SWITCH_HAS_OUT 0
#define SWITCH_HAS_TRI 0
#define SWITCH_IRQ -1
#define SWITCH_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SWITCH_IRQ_TYPE "NONE"
#define SWITCH_NAME "/dev/SWITCH"
#define SWITCH_RESET_VALUE 0
#define SWITCH_SPAN 16
#define SWITCH_TYPE "altera_avalon_pio"


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone V"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/null"
#define ALT_STDERR_BASE 0x0
#define ALT_STDERR_DEV null
#define ALT_STDERR_TYPE ""
#define ALT_STDIN "/dev/null"
#define ALT_STDIN_BASE 0x0
#define ALT_STDIN_DEV null
#define ALT_STDIN_TYPE ""
#define ALT_STDOUT "/dev/null"
#define ALT_STDOUT_BASE 0x0
#define ALT_STDOUT_DEV null
#define ALT_STDOUT_TYPE ""
#define ALT_SYSTEM_NAME "platform"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 4
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * pio_0 configuration
 *
 */

#define ALT_MODULE_CLASS_pio_0 altera_avalon_pio
#define PIO_0_BASE 0x5020
#define PIO_0_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_0_CAPTURE 0
#define PIO_0_DATA_WIDTH 3
#define PIO_0_DO_TEST_BENCH_WIRING 0
#define PIO_0_DRIVEN_SIM_VALUE 0
#define PIO_0_EDGE_TYPE "NONE"
#define PIO_0_FREQ 50000000
#define PIO_0_HAS_IN 0
#define PIO_0_HAS_OUT 1
#define PIO_0_HAS_TRI 0
#define PIO_0_IRQ -1
#define PIO_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_0_IRQ_TYPE "NONE"
#define PIO_0_NAME "/dev/pio_0"
#define PIO_0_RESET_VALUE 0
#define PIO_0_SPAN 16
#define PIO_0_TYPE "altera_avalon_pio"


/*
 * seven_seg0 configuration
 *
 */

#define ALT_MODULE_CLASS_seven_seg0 altera_avalon_pio
#define SEVEN_SEG0_BASE 0x5090
#define SEVEN_SEG0_BIT_CLEARING_EDGE_REGISTER 0
#define SEVEN_SEG0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEVEN_SEG0_CAPTURE 0
#define SEVEN_SEG0_DATA_WIDTH 7
#define SEVEN_SEG0_DO_TEST_BENCH_WIRING 0
#define SEVEN_SEG0_DRIVEN_SIM_VALUE 0
#define SEVEN_SEG0_EDGE_TYPE "NONE"
#define SEVEN_SEG0_FREQ 50000000
#define SEVEN_SEG0_HAS_IN 0
#define SEVEN_SEG0_HAS_OUT 1
#define SEVEN_SEG0_HAS_TRI 0
#define SEVEN_SEG0_IRQ -1
#define SEVEN_SEG0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEVEN_SEG0_IRQ_TYPE "NONE"
#define SEVEN_SEG0_NAME "/dev/seven_seg0"
#define SEVEN_SEG0_RESET_VALUE 0
#define SEVEN_SEG0_SPAN 16
#define SEVEN_SEG0_TYPE "altera_avalon_pio"


/*
 * seven_seg1 configuration
 *
 */

#define ALT_MODULE_CLASS_seven_seg1 altera_avalon_pio
#define SEVEN_SEG1_BASE 0x5070
#define SEVEN_SEG1_BIT_CLEARING_EDGE_REGISTER 0
#define SEVEN_SEG1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEVEN_SEG1_CAPTURE 0
#define SEVEN_SEG1_DATA_WIDTH 7
#define SEVEN_SEG1_DO_TEST_BENCH_WIRING 0
#define SEVEN_SEG1_DRIVEN_SIM_VALUE 0
#define SEVEN_SEG1_EDGE_TYPE "NONE"
#define SEVEN_SEG1_FREQ 50000000
#define SEVEN_SEG1_HAS_IN 0
#define SEVEN_SEG1_HAS_OUT 1
#define SEVEN_SEG1_HAS_TRI 0
#define SEVEN_SEG1_IRQ -1
#define SEVEN_SEG1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEVEN_SEG1_IRQ_TYPE "NONE"
#define SEVEN_SEG1_NAME "/dev/seven_seg1"
#define SEVEN_SEG1_RESET_VALUE 0
#define SEVEN_SEG1_SPAN 16
#define SEVEN_SEG1_TYPE "altera_avalon_pio"


/*
 * seven_seg2 configuration
 *
 */

#define ALT_MODULE_CLASS_seven_seg2 altera_avalon_pio
#define SEVEN_SEG2_BASE 0x5060
#define SEVEN_SEG2_BIT_CLEARING_EDGE_REGISTER 0
#define SEVEN_SEG2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEVEN_SEG2_CAPTURE 0
#define SEVEN_SEG2_DATA_WIDTH 7
#define SEVEN_SEG2_DO_TEST_BENCH_WIRING 0
#define SEVEN_SEG2_DRIVEN_SIM_VALUE 0
#define SEVEN_SEG2_EDGE_TYPE "NONE"
#define SEVEN_SEG2_FREQ 50000000
#define SEVEN_SEG2_HAS_IN 0
#define SEVEN_SEG2_HAS_OUT 1
#define SEVEN_SEG2_HAS_TRI 0
#define SEVEN_SEG2_IRQ -1
#define SEVEN_SEG2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEVEN_SEG2_IRQ_TYPE "NONE"
#define SEVEN_SEG2_NAME "/dev/seven_seg2"
#define SEVEN_SEG2_RESET_VALUE 0
#define SEVEN_SEG2_SPAN 16
#define SEVEN_SEG2_TYPE "altera_avalon_pio"


/*
 * seven_seg3 configuration
 *
 */

#define ALT_MODULE_CLASS_seven_seg3 altera_avalon_pio
#define SEVEN_SEG3_BASE 0x5050
#define SEVEN_SEG3_BIT_CLEARING_EDGE_REGISTER 0
#define SEVEN_SEG3_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEVEN_SEG3_CAPTURE 0
#define SEVEN_SEG3_DATA_WIDTH 7
#define SEVEN_SEG3_DO_TEST_BENCH_WIRING 0
#define SEVEN_SEG3_DRIVEN_SIM_VALUE 0
#define SEVEN_SEG3_EDGE_TYPE "NONE"
#define SEVEN_SEG3_FREQ 50000000
#define SEVEN_SEG3_HAS_IN 0
#define SEVEN_SEG3_HAS_OUT 1
#define SEVEN_SEG3_HAS_TRI 0
#define SEVEN_SEG3_IRQ -1
#define SEVEN_SEG3_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEVEN_SEG3_IRQ_TYPE "NONE"
#define SEVEN_SEG3_NAME "/dev/seven_seg3"
#define SEVEN_SEG3_RESET_VALUE 0
#define SEVEN_SEG3_SPAN 16
#define SEVEN_SEG3_TYPE "altera_avalon_pio"


/*
 * seven_seg4 configuration
 *
 */

#define ALT_MODULE_CLASS_seven_seg4 altera_avalon_pio
#define SEVEN_SEG4_BASE 0x5040
#define SEVEN_SEG4_BIT_CLEARING_EDGE_REGISTER 0
#define SEVEN_SEG4_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEVEN_SEG4_CAPTURE 0
#define SEVEN_SEG4_DATA_WIDTH 7
#define SEVEN_SEG4_DO_TEST_BENCH_WIRING 0
#define SEVEN_SEG4_DRIVEN_SIM_VALUE 0
#define SEVEN_SEG4_EDGE_TYPE "NONE"
#define SEVEN_SEG4_FREQ 50000000
#define SEVEN_SEG4_HAS_IN 0
#define SEVEN_SEG4_HAS_OUT 1
#define SEVEN_SEG4_HAS_TRI 0
#define SEVEN_SEG4_IRQ -1
#define SEVEN_SEG4_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEVEN_SEG4_IRQ_TYPE "NONE"
#define SEVEN_SEG4_NAME "/dev/seven_seg4"
#define SEVEN_SEG4_RESET_VALUE 0
#define SEVEN_SEG4_SPAN 16
#define SEVEN_SEG4_TYPE "altera_avalon_pio"


/*
 * seven_seg5 configuration
 *
 */

#define ALT_MODULE_CLASS_seven_seg5 altera_avalon_pio
#define SEVEN_SEG5_BASE 0x5030
#define SEVEN_SEG5_BIT_CLEARING_EDGE_REGISTER 0
#define SEVEN_SEG5_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEVEN_SEG5_CAPTURE 0
#define SEVEN_SEG5_DATA_WIDTH 7
#define SEVEN_SEG5_DO_TEST_BENCH_WIRING 0
#define SEVEN_SEG5_DRIVEN_SIM_VALUE 0
#define SEVEN_SEG5_EDGE_TYPE "NONE"
#define SEVEN_SEG5_FREQ 50000000
#define SEVEN_SEG5_HAS_IN 0
#define SEVEN_SEG5_HAS_OUT 1
#define SEVEN_SEG5_HAS_TRI 0
#define SEVEN_SEG5_IRQ -1
#define SEVEN_SEG5_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEVEN_SEG5_IRQ_TYPE "NONE"
#define SEVEN_SEG5_NAME "/dev/seven_seg5"
#define SEVEN_SEG5_RESET_VALUE 0
#define SEVEN_SEG5_SPAN 16
#define SEVEN_SEG5_TYPE "altera_avalon_pio"


/*
 * timer_0 configuration
 *
 */

#define ALT_MODULE_CLASS_timer_0 altera_avalon_timer
#define TIMER_0_ALWAYS_RUN 1
#define TIMER_0_BASE 0x5000
#define TIMER_0_COUNTER_SIZE 32
#define TIMER_0_FIXED_PERIOD 1
#define TIMER_0_FREQ 50000000
#define TIMER_0_IRQ 0
#define TIMER_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_0_LOAD_VALUE 49999999
#define TIMER_0_MULT 1.0
#define TIMER_0_NAME "/dev/timer_0"
#define TIMER_0_PERIOD 1
#define TIMER_0_PERIOD_UNITS "s"
#define TIMER_0_RESET_OUTPUT 0
#define TIMER_0_SNAPSHOT 0
#define TIMER_0_SPAN 32
#define TIMER_0_TICKS_PER_SEC 1
#define TIMER_0_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_0_TYPE "altera_avalon_timer"

#endif /* __SYSTEM_H_ */
