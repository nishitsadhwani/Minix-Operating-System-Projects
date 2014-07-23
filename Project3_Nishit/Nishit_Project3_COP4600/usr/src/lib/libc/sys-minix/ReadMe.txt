---- The fcntl.c ---------

Line 47

 case F_DISP_ALL_DATA  :	      /* for displaying the all data */
     
     case F_DISP_ONLY_DATA :      /* for displaying the only data */ 
     	
     case F_LOGICAL_BLOCK :	     /* for displaying the logical block */

     case F_PHYSICAL_BLOCK:      /* for displaying the physical block */
	m.m1_i3 = va_arg(argp, int);
     break;
