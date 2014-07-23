#include "syslib.h"
#include <string.h>
#include <stdio.h>

int sys_bcctl(endpoint_t proc_ep, int mode)
{
	unsigned long value;
	message m;
	m.m1_i1= proc_ep;
	m.m1_i3= mode;

	value= _kernel_call(SYS_BCCTL, &m);

	return value;
}
