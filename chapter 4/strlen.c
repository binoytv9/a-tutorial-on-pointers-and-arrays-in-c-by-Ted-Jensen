#include<stdio.h>

long strl(char *);

main()
{
	char c[]="binoytv9";
	long l;
	
	l=strl(c);
	printf("\nl = %ld\n",l);
}

long strl(char *c)
{
	long l;
	
	while(*c++!='\0')
		++l;
	return l;
}
/*
long strl(char c[])
{
	long l;
	int i=0;
	
	while(c[i++]!='\0')
		++l;
	return l;
}
*/
