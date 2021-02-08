#include <stdio.h>
//#include <conio.h>


int length(char *p);
char * reverse(char *p);

int main(void) {
	// your code goes here
	char a[10], *b;
	int len;
	
	puts("Enter name: ");
	gets(a);
	puts(a);
	len=length(a);
	printf("Length is %d \n",len);
	
	b=reverse(a);
	printf("Reverse is %s", b);
	
	return 0;
}

char * reverse(char *p)
{
    int l, i;
    l=length(p);
    char temp;
    puts(p);
    
    for(i=0; i<=(l/2); i++)
    {
        temp = *(p+i);
        *(p+i) = *(p+l-1-i);
        *(p+l-1-i) = temp;
    }
    puts("__reverse");
    puts(p);
    return(p);
}

int length(char *p)
{
    int i;
    for(i=0; *(p+i)!='\0'; i++);
    return(i);
}

