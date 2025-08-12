# Assignment
Memory management
Problem Statement :  
You are given a memory ( in RAM )  of size 100KB. You have to write the  allocate and 
deallocate functions which can be used by any process in the given system ( Bare Metal ). 
Minimum memory asked can be 1B , Maximum memory asked is 100KB. The functions should 
return pointer to the allocated memory and NULL if the request cannot be fulfilled. Example 
function prototypes are :  
● int * allocate( int size); // size in Bytes 
● Void deallocate(int * ptr );  // Pointer to allocated memory 
Sample use case :  
int * mem[100]; 
mem[0] = allocate( 128); 
mem[1] = allocate( 1024); 
mem[2] = allocate( 4096); 
deallocate(mem[1]); 
mem[1] = allocate( 512);
