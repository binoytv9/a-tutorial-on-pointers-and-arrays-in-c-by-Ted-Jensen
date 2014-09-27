#include<stdio.h>
#include<string.h>

void bubble(void *,int wid,int n);
int cmp(void *,void *);

main()
{
	char c[5][10]={"shiva","binoy","shibin","vyshak","najeeb"};
	int n=5;
	int i;
	long w;
	
	for(i=0;i<n;++i)
		printf("\n\t%s",c[i]);

	w=sizeof(int);
	bubble(c,10,n);
	
	printf("\n\naftr sorting : \n\n");
	for(i=0;i<n;++i)
		printf("\t%s\n",c[i]);
	
}

void bubble(void *a,int w,int n)
{
	int i,j,k,t;
	char buf[50];
	
	for(i=n-1;i>=0;--i)
		for(j=0;j<=i-1;++j)
			if(k=(cmp(a+w*j,a+w*(j+1)))>0){
				memcpy(buf,a+w*j,w);
				memcpy(a+w*j,a+w*(j+1),w);
				memcpy(a+w*(j+1),buf,w);
			}
}

int cmp(void *a,void *b)
{
	char *c,*d;
	c=(char *)a;
	d=(char *)b;
	return(strcmp(c,d));
}
