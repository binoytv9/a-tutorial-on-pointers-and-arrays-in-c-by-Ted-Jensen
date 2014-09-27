#include<stdio.h>
#include<string.h>

char *strchar(char *,char);

main()
{
	char a[]="binoy",b='b';
	
	printf("\na = %s\nb = %c\n",a,b);
	printf("\n%s\n",strchar(a,b));

}

char *strchar(char *a,char b)
{
	while(*a!='\0'){
		if(*a==b)
			return a;
		*a++;
	}
	
	return '\0';
}
