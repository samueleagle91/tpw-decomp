// asm_name.h: TPW_ASM_NAME("_ZN6CWorld7GetRandEv") names a symbol in an asm label as the host spells it. Mach-O puts an
// underscore in front of every C and C++ symbol (the compiler's __USER_LABEL_PREFIX__); ELF and 64-bit COFF do not.
#pragma once

#define TPW_ASM_PREFIX_TEXT2(prefix) #prefix
#define TPW_ASM_PREFIX_TEXT(prefix) TPW_ASM_PREFIX_TEXT2(prefix)
#define TPW_ASM_NAME(name) TPW_ASM_PREFIX_TEXT(__USER_LABEL_PREFIX__) name
