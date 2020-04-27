#include<stdio.h>

int main()
{
	unsigned long CurrentPosition = 7654321;
	unsigned char CP1 = 0;
	unsigned char CP2 = 0;
	unsigned char CP3 = 0;
	unsigned char CP4 = 0;
	CP1 = (CurrentPosition & 0xff000000UL) >> 24; 
	CP2 = (CurrentPosition & 0x00ff0000UL) >> 16; 
	CP3 = (CurrentPosition & 0x0000ff00UL) >> 8; 
	CP4 = (CurrentPosition & 0x000000ffUL);
	printf("cp1 is %c\n",CP1);
}	
