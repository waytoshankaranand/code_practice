#include <stdio.h>

int main(void) {
	// your code goes here
	union{
	    int i;
	    char a[2];
	}union1;
	
	union1.i=1;
	
	if(union1.a[0]==1)
	printf("little endian");
	else
	printf("big endian");
	return 0;
}

