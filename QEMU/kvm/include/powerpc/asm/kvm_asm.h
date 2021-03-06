#ifndef KVM_UNIFDEF_H
#define KVM_UNIFDEF_H

#ifdef __i386__
#ifndef CONFIG_X86_32
#define CONFIG_X86_32 1
#endif
#endif

#ifdef __x86_64__
#ifndef CONFIG_X86_64
#define CONFIG_X86_64 1
#endif
#endif

#if defined(__i386__) || defined (__x86_64__)
#ifndef CONFIG_X86
#define CONFIG_X86 1
#endif
#endif

#ifdef __ia64__
#ifndef CONFIG_IA64
#define CONFIG_IA64 1
#endif
#endif

#ifdef __PPC__
#ifndef CONFIG_PPC
#define CONFIG_PPC 1
#endif
#endif

#ifdef __s390__
#ifndef CONFIG_S390
#define CONFIG_S390 1
#endif
#endif

#endif
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2, as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 * Copyright IBM Corp. 2008
 *
 * Authors: Hollis Blanchard <hollisb@us.ibm.com>
 */

#ifndef __POWERPC_KVM_ASM_H__
#define __POWERPC_KVM_ASM_H__

/* IVPR must be 64KiB-aligned. */
#define VCPU_SIZE_ORDER 4
#define VCPU_SIZE_LOG   (VCPU_SIZE_ORDER + 12)
#define VCPU_TLB_PGSZ   PPC44x_TLB_64K
#define VCPU_SIZE_BYTES (1<<VCPU_SIZE_LOG)

#define BOOKE_INTERRUPT_CRITICAL 0
#define BOOKE_INTERRUPT_MACHINE_CHECK 1
#define BOOKE_INTERRUPT_DATA_STORAGE 2
#define BOOKE_INTERRUPT_INST_STORAGE 3
#define BOOKE_INTERRUPT_EXTERNAL 4
#define BOOKE_INTERRUPT_ALIGNMENT 5
#define BOOKE_INTERRUPT_PROGRAM 6
#define BOOKE_INTERRUPT_FP_UNAVAIL 7
#define BOOKE_INTERRUPT_SYSCALL 8
#define BOOKE_INTERRUPT_AP_UNAVAIL 9
#define BOOKE_INTERRUPT_DECREMENTER 10
#define BOOKE_INTERRUPT_FIT 11
#define BOOKE_INTERRUPT_WATCHDOG 12
#define BOOKE_INTERRUPT_DTLB_MISS 13
#define BOOKE_INTERRUPT_ITLB_MISS 14
#define BOOKE_INTERRUPT_DEBUG 15

/* E500 */
#define BOOKE_INTERRUPT_SPE_UNAVAIL 32
#define BOOKE_INTERRUPT_SPE_FP_DATA 33
#define BOOKE_INTERRUPT_SPE_FP_ROUND 34
#define BOOKE_INTERRUPT_PERFORMANCE_MONITOR 35

#define RESUME_FLAG_NV          (1<<0)  /* Reload guest nonvolatile state? */
#define RESUME_FLAG_HOST        (1<<1)  /* Resume host? */

#define RESUME_GUEST            0
#define RESUME_GUEST_NV         RESUME_FLAG_NV
#define RESUME_HOST             RESUME_FLAG_HOST
#define RESUME_HOST_NV          (RESUME_FLAG_HOST|RESUME_FLAG_NV)

#endif /* __POWERPC_KVM_ASM_H__ */
