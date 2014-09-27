#include<stdio.h>

void bubble(int *,int n);
int cmp(void *,void *);

main()
{
	int a[]={9,8,7,6,5,4,3,2,1,0};
	int n=10;
	int i;

	for(i=0;i<n;++i)
		printf("\n\t%d",a[i]);

	bubble(a,n);
	
	printf("\n\naftr sorting : \n\n");
	for(i=0;i<n;++i)
		printf("\t%d\n",a[i]);
	
}

void bubble(int *a,int n)
{
	int i,j,t;
	
	for(i=n-1;i>=0;--i)
		for(j=0;j<=i-1;++j)
			if(cmp((void *)&a[j],(void *)&a[j+1])){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
}

int cmp(void *a,void *b)
{
	int *c,*d;
	c=(int *)a;
	d=(int *)b;
	return(*c>*d);
}
