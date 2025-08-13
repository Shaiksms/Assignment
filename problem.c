#include<stdio.h>
#include<stdlib.h>
static int Ram_size=100000;	
int * allocate( int size)	
{
	if((size<=Ram_size)&&(size!=0))		
	{
		Ram_size-=size;		
		return malloc(size);	
	}
	else
		return NULL;		
}
void deallocate(int * ptr )	
{
	int temp;
	if(ptr==NULL)			
	{
		printf("Invalid Address\n");
		return;
	}
	temp=*((long long*)ptr-1);
	free(ptr);					
	Ram_size+=temp;				
}
