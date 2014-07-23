Note : 
If you are using Notepad, you can see the line numbers by clicking on --> View -->Status Bar. Now you'll be able to view the 
line numbers, bottom right corner.

// The line number and corresponding files in which I've done editiong is mentioned below

- Declaring BC and CPU BURST (Line 36 , proc.h)

The variables BC and CPU BURST are declared over here. 

- Initialization BC and CPU BURST ( Line 1850 , proc.c )

The values of BC and CPU BURST are initialized to 0.

- Incrementing BC and CPU BURST, ( Line 596 , proc.c )

The values of BC and CPU burst are incremented here, with the incrementation of IPC , as IPC 
in our case is equal to the cpu bursts.

- Mapping the sys_bcctl to do_bcctl, ( Line 202, system.c )

map(SYS_BCCTL, do_bcctl);

- The decleration of function prototype for do_bcctl, ( Line 209, system.h )

int do_bcctl(struct proc * caller, message *m_ptr);

