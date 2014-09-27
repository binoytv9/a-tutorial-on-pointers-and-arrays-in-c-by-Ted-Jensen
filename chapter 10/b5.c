#include<stdio.h>
#include<string.h>

void bubble(void *,size_t wid,int n);
int cmp(void *,void *);

main()
{
	int a[]={9,8,7,6,5,4,3,2,1,0};
	int n=10;
	int i;
	long w;
	
	for(i=0;i<n;++i)
		printf("\n\t%d",a[i]);

	w=sizeof(int);
	bubble(a,w,n);
	
	printf("\n\naftr sorting : \n\n");
	for(i=0;i<n;++i)
		printf("\t%d\n",a[i]);
	
}

void bubble(void *a,size_t w,int n)
{
	int i,j,t;
	char buf[8];
	
	for(i=n-1;i>=0;--i)
		for(j=0;j<=i-1;++j)
			if(cmp(a+w*j,a+w*(j+1))){
			//	t=a[j];
				memcpy(buf,a+w*j,w);
			//	a[j]=a[j+1];
				memcpy(a+w*j,a+w*(j+1),w);
			//	a[j+1]=t;
				memcpy(a+w*(j+1),buf,w);
			}
}

int cmp(void *a,void *b)
{
	int *c,*d;
	c=(int *)a;
	d=(int *)b;
	return(*c>*d);
}
