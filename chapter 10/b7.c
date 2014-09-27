#include<stdio.h>
#include<string.h>

void bubble(void *,int wid,int n,int (*fp)(void *,void *));
int cmpstr(void *,void *);
int cmpint(void *,void *);

main()
{
	char c[5][10]={"shiva","binoy","shibin","vyshak","najeeb"};
	int a[]={9,8,7,6,5,4,3,2,1,0};
	int i;
	long w;

	printf("\n\nchar array : \n\n");
	
	for(i=0;i<5;++i)
		printf("\n\t%s",c[i]);
	
	printf("\n\nint array : \n\n");

	for(i=0;i<10;++i)
		printf("\n\t%d",a[i]);

	w=sizeof(int);
	bubble(c,10,5,cmpstr);
	bubble(a,4,10,cmpint);
	
	printf("\n\naftr sorting : \n\n");

	for(i=0;i<5;++i)
		printf("\t%s\n",c[i]);
	
	for(i=0;i<10;++i)
		printf("\n\t%d",a[i]);
	
	putchar('\n');
}

void bubble(void *a,int w,int n,int (*fp)(void *,void *))
{
	int i,j,k,t;
	char buf[50];
	
	for(i=n-1;i>=0;--i)
		for(j=0;j<=i-1;++j)
			if(k=(fp(a+w*j,a+w*(j+1)))>0){
				memcpy(buf,a+w*j,w);
				memcpy(a+w*j,a+w*(j+1),w);
				memcpy(a+w*(j+1),buf,w);
			}
}

int cmpstr(void *a,void *b)
{
	char *c,*d;
	c=(char *)a;
	d=(char *)b;
	return(strcmp(c,d));
}

int cmpint(void *a,void *b)
{
	int *c,*d;
	c=(int *)a;
	d=(int *)b;
	return(*c>*d);
}
