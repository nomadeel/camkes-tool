/*#
 *# Copyright 2015, NICTA
 *#
 *# This software may be distributed and modified according to the terms of
 *# the BSD 2-Clause license. Note that NO WARRANTY is provided.
 *# See "LICENSE_BSD2.txt" for details.
 *#
 *# @TAG(NICTA_BSD)
 #*/

#include <sel4/sel4.h>

/*? macros.show_includes(me.instance.type.includes) ?*/

/*- set notifications = [] -*/
/*- for index in six.moves.range(len(me.parent.to_ends)) -*/
  /*- do notifications.append(alloc('notification_%d' % index, seL4_NotificationObject, write=True)) -*/
/*- endfor -*/

void /*? me.interface.name ?*/_emit_underlying(void) {
    /*- for notification in notifications -*/
    seL4_Signal(/*? notification ?*/);
    /*- endfor -*/
}
