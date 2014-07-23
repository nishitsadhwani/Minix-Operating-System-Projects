#include "kernel/system.h"
#include <string.h>

int do_bcctl(struct proc * caller, message * m_ptr)
{
	struct proc * mainbc;		//Pointer to current process
	proc_nr_t proc_nr, proc_nr_e;
	int mode;			// Was used for testing project 1

	// The Endpoint of process being stored

	proc_nr_e = ( proc_nr_t) m_ptr->m1_i1;
 	mode = ( proc_nr_t) m_ptr->m1_i3;

	if (!isokendpt(proc_nr_e , &proc_nr))
	{
		printf("\n Invalid Endpoint ");
		return (EINVAL);
	}

	mainbc = proc_addr(proc_nr);
	return mainbc->p_BC;
}

/*------------------------------------------------------------------------------------
	Testing
	
	if(mode==0)
	{

		return ((mainbc->p_BC));
	}
	else
	{
		if(mode==1)
		{
			before_reset= mainbc->p_BC;
			mainbc->p_BC = 0;
			return ((before_reset));
		}
		else
		{
			if(mode==2)
			{
				mainbc->p_BC= mainbc->p_BC + 1;
				return (mainbc->p_BC);
			}
			else
			{
				return -1;
			}
		}
	}*/


