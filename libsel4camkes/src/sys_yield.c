/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(DATA61_BSD)
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <sel4/sel4.h>
#include <utils/util.h>
#include <errno.h>
#include <autoconf.h>
#include <sel4camkes/gen_config.h>

long camkes_sys_sched_yield(va_list ap UNUSED)
{
#ifdef CONFIG_KERNEL_MCS
    return -ENOSYS;
#else
    seL4_Yield();
    return 0;
#endif
}
