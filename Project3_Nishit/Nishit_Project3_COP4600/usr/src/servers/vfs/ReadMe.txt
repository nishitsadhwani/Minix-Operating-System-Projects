----The Changes I made in open.c

Line 134

	if(oflags & O_SEQ)
	{
	//printf("\n Sequential, common open ");

        omode = I_SEQ | (omode & ALLPERMS & fp->fp_umask);
        }

Line 188

	case S_IFSEQ:
	/* Truncate sequential file if O_TRUNC. */
	printf("\n Opening Sequential ");	
	if (oflags & O_TRUNC) {
				if ((r = forbidden(fp, vp, W_BIT)) != OK)
					break;
				upgrade_vnode_lock(vp);
				truncate_vnode(vp, 0);
			}
			break;

---The changes I made in misc.c

Line 288

//----------------------------------------------------------

		case F_DISP_ALL_DATA  :	      /* for displaying the all data */
     		printf("\n Fcntl 1 ");
    		break;
     		case F_DISP_ONLY_DATA :      /* for displaying the only data */ 
     		printf("\n Fcntl 2 ");
    		 break;	

     		case F_LOGICAL_BLOCK :	     /* for displaying the logical block */
     		printf("\n Fcntl 3 ");
     		break;
     
		case F_PHYSICAL_BLOCK:      /* for displaying the physical block */
		printf("\n Fcntl 4 ");
     		break;	


//----------------------------------------------------------

