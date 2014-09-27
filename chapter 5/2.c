#include<stdio.h>
#include<string.h>

struct tag{
	char fname[10];
	char lname[10];
	int age;
	float rate;
}s;

void showname(struct tag *);

main()
{
	struct tag *sp;
	sp=&s;
	
	strcpy(s.fname,"binoy");
	strcpy(s.lname,"tv");
	s.age=21;
	s.rate=100.0;
		
	showname(sp);
}

void showname(struct tag *sp)
{
	printf("\nfirst name is %s",sp->fname);
	printf("\nlast name is %s\n",sp->lname);
}
