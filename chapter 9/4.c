#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

#define X 2
#define Y 2
#define Z 2

main()
{
	char *space;
	char ***a3d;
	
	int y,z;
	ptrdiff_t diff;
	
	space=malloc(X*Y*Z*sizeof(char));
	
	a3d=malloc(Z*sizeof(char **));
	
	for(z=0;z<Z;++z){
		a3d[z]=malloc(Y*sizeof(char *));
		for(y=0;y<Y;++y)
			a3d[z][y]=space+(z*Y*X+X*y);
	}
	
	for(z=0;z<Z;++z){
		printf("Location of array %d is %p\n",z,*a3d[z]);

		for(y=0;y<Y;++y){
			printf("Array %d and Row %d starts at %p",z,y,a3d[z][y]);

			diff=a3d[z][y]-space;
			printf("\tdiff=%d ",diff);
			printf("z=%d y=%d\n",z,y);
		}
	}
}
