#include<stdio.h>
#include<stdlib.h>

main()
{
	int nr,r,nc,c;
	int *ap;
	int **rp;
	int *t;
	
	nr=10;
	nc=5;
	ap=malloc(nr*nc*sizeof(int));
	
	if(ap==NULL){
		printf("\nmemory unavailable to allocate to array\n");
		exit(0);
	}
	
	rp=malloc(nr*sizeof(int *));
	if(rp==NULL){
		printf("\nmemory unavailable to allocate to pointers\n");
		exit(0);
	}
	
	printf("\nIndex\tPointer(hex)\tPointer(dec)\tDiff\n\n");
	for(r=0;r<nr;++r){
		rp[r]=ap+(r*nc);
		if(rp[r]==NULL){
			printf("\nmemory unavailable to allocate to element rp[%d]\n",r);
			exit(0);
		}
		printf("%d\t%p\t%ld",r,rp[r],(long)rp[r]);
		if(r>0)
			printf("\t%d\n",(int)(rp[r]-rp[r-1]));
		else
			putchar('\n');
	}
	
	printf("\n\n\n\t\tPrinting...\n\n\n");	
	
	for(r=0;r<nr;++r){
		for(c=0;c<nc;++c){
			rp[r][c]=r+c;
			printf("\t%d",rp[r][c]);
		}
		putchar('\n');
	}
	
	printf("\n\n\n\t\tTesting...\n\n\n");	
	
	t=ap;
	for(r=0;r<nr;++r){
		for(c=0;c<nc;++c){
			printf("\t%d",*(t++));
		}
		putchar('\n');
	}
	
}
