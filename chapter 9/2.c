#include<stdio.h>
#include<stdlib.h>

main()
{
	int nr,nc,r,c;
	int **pa;
	nr=10;
	nc=5;	
		
	pa=malloc(nr*sizeof(int *));
	
	if(pa==NULL){
		printf("\nmemory unavailable to allocate to row pointers\n");
		exit(0);
	}
	
	printf("Index\tPointer(hex)\tPointer(dec)\tDiff\n");
	for(r=0;r<nr;++r)
	{
		pa[r]=malloc(nc*sizeof(int));
		
		if(pa[r]==NULL){
			printf("\nmemory unavailable to allocate to element pa[%d]\n",r);
			exit(0);
		}
		
		printf("\n%d\t%p\t%ld",r,pa[r],(long)pa[r]);
		if(r>0)
			printf("\t%d\n",(int)(pa[r]-pa[r-1]));
		else
			printf("\n");
	}
}
