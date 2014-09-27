#include<stdio.h>

char stra[80]="A string to be used for demonstration purposes";
char strb[80]="12345678901234567890123456789012345678901234567890";

int main(void)
{
	char *pa;
	char *pb;

	puts(stra);
	pa=stra;
	puts(pa);
	pb=strb;
	
	putchar('\n');
	puts(strb);
	
	putchar('\n');
	while(*pa!='\0')
		*pb++=*pa++;

	*pb='\0';
	puts(strb);

	return 0;
}
