#include<stdio.h>

void strcaat(char *,char *);

main()
{
	char a[]="binoy",b[]="tv9";
	
	printf("\na = %s\nb = %s\n",a,b);
	strcaat(a,b);
	printf("\na = %s\nb = %s\n",a,b);
}

void strcaat(char *a,char *b)
{
	while(*a!='\0')
		*a++;
	
	while(*b!='\0')
		*a++=*b++;
		
	*b='\0';
}
