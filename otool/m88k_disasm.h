/*
 * Copyright (c) 1999 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
#import <stuff/bytesex.h>
#import <mach-o/reloc.h>
#import <mach-o/nlist.h>
#import <stuff/bool.h>
#include "stuff/symbol.h"

extern uint32_t m88k_disassemble(
    char *sect,
    uint32_t left,
    uint32_t addr,
    uint32_t sect_addr,
    enum byte_sex object_byte_sex,
    struct relocation_info *sorted_relocs,
    uint32_t nsorted_relocs,
    struct nlist *symbols,
    uint32_t nsymbols,
    struct symbol *sorted_symbols,
    uint32_t nsorted_symbols,
    char *strings,
    uint32_t strings_size,
    enum bool verbose);
