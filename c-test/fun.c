#include <stdio.h>
#include <math.h>
/*
int add(int x, int y, int z)
{
	return(x+y+z);
}

int main(){
	int x, y, z;
	printf("please input three numbers\n");
	scanf("%d,%d,%d",&x, &y,&z);
	printf("sum is %d\n",add(x,y,z));
} */
int add(int x, int y)
{
	int z;
	z= x + y;
	return(z);
}
int main(){
	int x,y,z;
	printf("please input two numbers\n");
	scanf("%d,%d",&x,&y);
	z=add(x,y);
	printf("sum is %d\n",z);
}
