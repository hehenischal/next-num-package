#include<stdio.h>

#include<string.h>


// This is the source code for the nextnum Python 
int main()
{
	int i;
	
	for(i=0;i<1000;i++)
	{
		printf("if num == %d:\n",i);
		printf("\treturn %d\n",i+1);
	}
	
	
	return 0;
}
