#include<stdio.h>
#include<string.h>

struct tag{
	char lname[20];
	char fname[20];
	int age;
	float rate;
};

struct tag str;

int main(void)
{
	strcpy(str.fname,"binoy");
	strcpy(str.lname,"tv");

	printf("\n%s",str.fname);
	printf("\n%s\n",str.lname);

	return 0;
}
