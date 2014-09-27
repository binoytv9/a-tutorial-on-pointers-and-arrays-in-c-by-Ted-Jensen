#include<stdio.h>

void int_cpy(int *d,int *s,int n);

int stra[80];
int strb[80];

int main(void)
{
	int i=0,k;
	
	while(i<10){
		stra[i]=i;
		strb[i]=10+i;
		++i;
	}
	--i;

	printf("\nA\tB\n");
	
	k=0;
	while(k<i){
		printf("%d\t",stra[k]);
		printf("%d\n",strb[k++]);
	}
	
	int_cpy(strb,stra,5);

	putchar('\n');
	
	k=0;
	while(k<i){
		printf("%d\t",stra[k]);
		printf("%d\n",strb[k++]);
	}
	
	putchar('\n');
	
	return 0;
}

void int_cpy(int *d,int *s,int n)
{
	while(--n>=0)
		*d++=*s++;
}
