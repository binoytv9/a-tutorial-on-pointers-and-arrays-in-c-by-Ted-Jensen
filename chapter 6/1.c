#include<stdio.h>

#define ROW 10
#define COLUMN 10

main()
{
	int a[ROW][COLUMN];
	int r,c;
	
	for(r=0;r<ROW;++r)
		for(c=0;c<COLUMN;++c)
			a[r][c]=r*c;
	
	
	for(r=0;r<ROW;++r){
		for(c=0;c<COLUMN;++c)
			printf("\t%d",*(*(a+r)+c));
		printf("\n");
	}
}
