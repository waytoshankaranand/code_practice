#include <stdio.h>
void swap(int* x, int *y);

int main(void) {
	// your code goes here
	int a, b;
	printf("enter two numbers ");
	scanf("%d%d",&a,&b);
	swap(&a, &b);
	printf("\n a: %d ,b: %d",a,b);
	return 0;
}

void swap(int* x, int *y)
{
    /*int temp;
    temp = *x;
    *x= *y;
    *y= temp;*/
    *x= *x + *y;
    *y= *x - *y;
    *x= *x - *y;
    
}

