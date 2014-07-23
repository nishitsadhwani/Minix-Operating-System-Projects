---- The changes I made in creat.c ----
int
creat(const char *path, mode_t mode, int r_or_s)
{

	_DIAGASSERT(path != NULL);
	if(r_or_s == 1 )
	{
		printf("\n Sequential File ");
 		return(open(path, O_WRONLY|O_CREAT|O_TRUNC|O_SEQ, mode));
	}
	else
	{
		printf("\n Regular File ");
 		return(open(path, O_WRONLY|O_CREAT|O_TRUNC, mode));
	}
}
