#include<stdio.h>

char *my_strcpy(char *d,char *s);

char stra[80]="A string to be used for demonstration purposes";
char strb[80]="12345678901234567890123456789012345678901234567890";

int main(void)
{
	my_strcpy(strb,stra);

	putchar('\n');
	
	puts(strb);
	puts(stra);

	return 0;
}


char *my_strcpy(char *d,char *s)
{
	char *p=d;
	while(*s!='\0')
		*p++=*s++;
	*p='\0';
	return d;
}
