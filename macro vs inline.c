#include <stdio.h>

#define sqr(a) a*a //++a*++a 
inline int square(p) {
    return(p*p);
}
int main(void) {
	// your code goes here
	int b=2,c=2;
	printf("%d\n", sqr(++b));
	printf("%d",square(++c));
	
	return 0;
}

