#include<stdio.h>
#include<stdlib.h>

#define COL 10

//typedef int a[COL];
int (*ap)[COL];
//a *ap;

main()
{
	int i,j;
	int nr=10;
	
	ap = malloc(nr*COL*sizeof(int));
	
	for(i=0;i<nr;++i)
		for(j=0;j<COL;++j)
			ap[i][j]=10;

	for(i=0;i<nr;++i){
		for(j=0;j<COL;++j)
			printf("%d\t",*(*(ap+i)+j));
		printf("\n");
	}
}
