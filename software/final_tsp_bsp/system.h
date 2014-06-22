/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'cpu' in SOPC Builder design 'nios2_c'
 * SOPC Builder design path: ../../nios2_c.sopcinfo
 *
 * Generated: Sun Jun 22 14:37:52 IDT 2014
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

#define ALT_CPU_ARCHITECTURE "altera_nios2_qsys"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00048820
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "fast"
#define ALT_CPU_DATA_ADDR_WIDTH 0x19
#define ALT_CPU_DCACHE_LINE_SIZE 32
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_DCACHE_SIZE 16384
#define ALT_CPU_EXCEPTION_ADDR 0x00000020
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 1
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 32
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_ICACHE_SIZE 16384
#define ALT_CPU_INITDA_SUPPORTED
#define ALT_CPU_INST_ADDR_WIDTH 0x13
#define ALT_CPU_NAME "cpu"
#define ALT_CPU_NUM_OF_SHADOW_REG_SETS 0
#define ALT_CPU_RESET_ADDR 0x00000000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00048820
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "fast"
#define NIOS2_DATA_ADDR_WIDTH 0x19
#define NIOS2_DCACHE_LINE_SIZE 32
#define NIOS2_DCACHE_LINE_SIZE_LOG2 5
#define NIOS2_DCACHE_SIZE 16384
#define NIOS2_EXCEPTION_ADDR 0x00000020
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 1
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 32
#define NIOS2_ICACHE_LINE_SIZE_LOG2 5
#define NIOS2_ICACHE_SIZE 16384
#define NIOS2_INITDA_SUPPORTED
#define NIOS2_INST_ADDR_WIDTH 0x13
#define NIOS2_NUM_OF_SHADOW_REG_SETS 0
#define NIOS2_RESET_ADDR 0x00000000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_SYSID_QSYS
#define __ALTERA_AVALON_TIMER
#define __ALTERA_NIOS2_QSYS


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
#define ALT_STDERR "/dev/jtag_uart"
#define ALT_STDERR_BASE 0x49010
#define ALT_STDERR_DEV jtag_uart
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart"
#define ALT_STDIN_BASE 0x49010
#define ALT_STDIN_DEV jtag_uart
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart"
#define ALT_STDOUT_BASE 0x49010
#define ALT_STDOUT_DEV jtag_uart
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "nios2_c"


/*
 * hal configuration
 *
 */

#define ALT_MAX_FD 32
#define ALT_SYS_CLK TIMER_0
#define ALT_TIMESTAMP_CLK none


/*
 * jtag_uart configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart altera_avalon_jtag_uart
#define JTAG_UART_BASE 0x49010
#define JTAG_UART_IRQ 1
#define JTAG_UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_NAME "/dev/jtag_uart"
#define JTAG_UART_READ_DEPTH 64
#define JTAG_UART_READ_THRESHOLD 8
#define JTAG_UART_SPAN 8
#define JTAG_UART_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_WRITE_DEPTH 64
#define JTAG_UART_WRITE_THRESHOLD 8


/*
 * key configuration
 *
 */

#define ALT_MODULE_CLASS_key altera_avalon_pio
#define KEY_BASE 0x1000040
#define KEY_BIT_CLEARING_EDGE_REGISTER 0
#define KEY_BIT_MODIFYING_OUTPUT_REGISTER 0
#define KEY_CAPTURE 0
#define KEY_DATA_WIDTH 4
#define KEY_DO_TEST_BENCH_WIRING 0
#define KEY_DRIVEN_SIM_VALUE 0
#define KEY_EDGE_TYPE "NONE"
#define KEY_FREQ 50000000
#define KEY_HAS_IN 1
#define KEY_HAS_OUT 0
#define KEY_HAS_TRI 0
#define KEY_IRQ 0
#define KEY_IRQ_INTERRUPT_CONTROLLER_ID 0
#define KEY_IRQ_TYPE "LEVEL"
#define KEY_NAME "/dev/key"
#define KEY_RESET_VALUE 0
#define KEY_SPAN 16
#define KEY_TYPE "altera_avalon_pio"


/*
 * ledg configuration
 *
 */

#define ALT_MODULE_CLASS_ledg altera_avalon_pio
#define LEDG_BASE 0x1000030
#define LEDG_BIT_CLEARING_EDGE_REGISTER 0
#define LEDG_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LEDG_CAPTURE 0
#define LEDG_DATA_WIDTH 8
#define LEDG_DO_TEST_BENCH_WIRING 0
#define LEDG_DRIVEN_SIM_VALUE 0
#define LEDG_EDGE_TYPE "NONE"
#define LEDG_FREQ 50000000
#define LEDG_HAS_IN 0
#define LEDG_HAS_OUT 1
#define LEDG_HAS_TRI 0
#define LEDG_IRQ -1
#define LEDG_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LEDG_IRQ_TYPE "NONE"
#define LEDG_NAME "/dev/ledg"
#define LEDG_RESET_VALUE 0
#define LEDG_SPAN 16
#define LEDG_TYPE "altera_avalon_pio"


/*
 * sysid_qsys_0 configuration
 *
 */

#define ALT_MODULE_CLASS_sysid_qsys_0 altera_avalon_sysid_qsys
#define SYSID_QSYS_0_BASE 0x49008
#define SYSID_QSYS_0_ID 74565
#define SYSID_QSYS_0_IRQ -1
#define SYSID_QSYS_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SYSID_QSYS_0_NAME "/dev/sysid_qsys_0"
#define SYSID_QSYS_0_SPAN 8
#define SYSID_QSYS_0_TIMESTAMP 1403436289
#define SYSID_QSYS_0_TYPE "altera_avalon_sysid_qsys"


/*
 * tightly_coupled_data_memory configuration
 *
 */

#define ALT_MODULE_CLASS_tightly_coupled_data_memory altera_avalon_onchip_memory2
#define TIGHTLY_COUPLED_DATA_MEMORY_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define TIGHTLY_COUPLED_DATA_MEMORY_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define TIGHTLY_COUPLED_DATA_MEMORY_BASE 0x40000
#define TIGHTLY_COUPLED_DATA_MEMORY_CONTENTS_INFO ""
#define TIGHTLY_COUPLED_DATA_MEMORY_DUAL_PORT 0
#define TIGHTLY_COUPLED_DATA_MEMORY_GUI_RAM_BLOCK_TYPE "AUTO"
#define TIGHTLY_COUPLED_DATA_MEMORY_INIT_CONTENTS_FILE "nios2_c_tightly_coupled_data_memory"
#define TIGHTLY_COUPLED_DATA_MEMORY_INIT_MEM_CONTENT 1
#define TIGHTLY_COUPLED_DATA_MEMORY_INSTANCE_ID "NONE"
#define TIGHTLY_COUPLED_DATA_MEMORY_IRQ -1
#define TIGHTLY_COUPLED_DATA_MEMORY_IRQ_INTERRUPT_CONTROLLER_ID -1
#define TIGHTLY_COUPLED_DATA_MEMORY_NAME "/dev/tightly_coupled_data_memory"
#define TIGHTLY_COUPLED_DATA_MEMORY_NON_DEFAULT_INIT_FILE_ENABLED 0
#define TIGHTLY_COUPLED_DATA_MEMORY_RAM_BLOCK_TYPE "AUTO"
#define TIGHTLY_COUPLED_DATA_MEMORY_READ_DURING_WRITE_MODE "DONT_CARE"
#define TIGHTLY_COUPLED_DATA_MEMORY_SINGLE_CLOCK_OP 0
#define TIGHTLY_COUPLED_DATA_MEMORY_SIZE_MULTIPLE 1
#define TIGHTLY_COUPLED_DATA_MEMORY_SIZE_VALUE 20000
#define TIGHTLY_COUPLED_DATA_MEMORY_SPAN 20000
#define TIGHTLY_COUPLED_DATA_MEMORY_TYPE "altera_avalon_onchip_memory2"
#define TIGHTLY_COUPLED_DATA_MEMORY_WRITABLE 1


/*
 * tightly_coupled_instruction_memory configuration
 *
 */

#define ALT_MODULE_CLASS_tightly_coupled_instruction_memory altera_avalon_onchip_memory2
#define TIGHTLY_COUPLED_INSTRUCTION_MEMORY_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define TIGHTLY_COUPLED_INSTRUCTION_MEMORY_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define TIGHTLY_COUPLED_INSTRUCTION_MEMORY_BASE 0x20000
#define TIGHTLY_COUPLED_INSTRUCTION_MEMORY_CONTENTS_INFO ""
#define TIGHTLY_COUPLED_INSTRUCTION_MEMORY_DUAL_PORT 1
#define TIGHTLY_COUPLED_INSTRUCTION_MEMORY_GUI_RAM_BLOCK_TYPE "AUTO"
#define TIGHTLY_COUPLED_INSTRUCTION_MEMORY_INIT_CONTENTS_FILE "nios2_c_tightly_coupled_instruction_memory"
#define TIGHTLY_COUPLED_INSTRUCTION_MEMORY_INIT_MEM_CONTENT 1
#define TIGHTLY_COUPLED_INSTRUCTION_MEMORY_INSTANCE_ID "NONE"
#define TIGHTLY_COUPLED_INSTRUCTION_MEMORY_IRQ -1
#define TIGHTLY_COUPLED_INSTRUCTION_MEMORY_IRQ_INTERRUPT_CONTROLLER_ID -1
#define TIGHTLY_COUPLED_INSTRUCTION_MEMORY_NAME "/dev/tightly_coupled_instruction_memory"
#define TIGHTLY_COUPLED_INSTRUCTION_MEMORY_NON_DEFAULT_INIT_FILE_ENABLED 0
#define TIGHTLY_COUPLED_INSTRUCTION_MEMORY_RAM_BLOCK_TYPE "AUTO"
#define TIGHTLY_COUPLED_INSTRUCTION_MEMORY_READ_DURING_WRITE_MODE "DONT_CARE"
#define TIGHTLY_COUPLED_INSTRUCTION_MEMORY_SINGLE_CLOCK_OP 0
#define TIGHTLY_COUPLED_INSTRUCTION_MEMORY_SIZE_MULTIPLE 1
#define TIGHTLY_COUPLED_INSTRUCTION_MEMORY_SIZE_VALUE 80000
#define TIGHTLY_COUPLED_INSTRUCTION_MEMORY_SPAN 80000
#define TIGHTLY_COUPLED_INSTRUCTION_MEMORY_TYPE "altera_avalon_onchip_memory2"
#define TIGHTLY_COUPLED_INSTRUCTION_MEMORY_WRITABLE 1


/*
 * timer_0 configuration
 *
 */

#define ALT_MODULE_CLASS_timer_0 altera_avalon_timer
#define TIMER_0_ALWAYS_RUN 0
#define TIMER_0_BASE 0x1000000
#define TIMER_0_COUNTER_SIZE 32
#define TIMER_0_FIXED_PERIOD 0
#define TIMER_0_FREQ 50000000
#define TIMER_0_IRQ 2
#define TIMER_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_0_LOAD_VALUE 49999
#define TIMER_0_MULT 0.0010
#define TIMER_0_NAME "/dev/timer_0"
#define TIMER_0_PERIOD 1
#define TIMER_0_PERIOD_UNITS "ms"
#define TIMER_0_RESET_OUTPUT 0
#define TIMER_0_SNAPSHOT 1
#define TIMER_0_SPAN 32
#define TIMER_0_TICKS_PER_SEC 1000.0
#define TIMER_0_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_0_TYPE "altera_avalon_timer"


/*
 * to_hex configuration
 *
 */

#define ALT_MODULE_CLASS_to_hex altera_avalon_pio
#define TO_HEX_BASE 0x1000020
#define TO_HEX_BIT_CLEARING_EDGE_REGISTER 0
#define TO_HEX_BIT_MODIFYING_OUTPUT_REGISTER 0
#define TO_HEX_CAPTURE 0
#define TO_HEX_DATA_WIDTH 14
#define TO_HEX_DO_TEST_BENCH_WIRING 0
#define TO_HEX_DRIVEN_SIM_VALUE 0
#define TO_HEX_EDGE_TYPE "NONE"
#define TO_HEX_FREQ 50000000
#define TO_HEX_HAS_IN 0
#define TO_HEX_HAS_OUT 1
#define TO_HEX_HAS_TRI 0
#define TO_HEX_IRQ -1
#define TO_HEX_IRQ_INTERRUPT_CONTROLLER_ID -1
#define TO_HEX_IRQ_TYPE "NONE"
#define TO_HEX_NAME "/dev/to_hex"
#define TO_HEX_RESET_VALUE 0
#define TO_HEX_SPAN 16
#define TO_HEX_TYPE "altera_avalon_pio"

#endif /* __SYSTEM_H_ */
