#include <iostream>
using namespace std;
int * add(int *x, int *y);

int main() {
	// your code goes here
	int a[5]={1,2,3,4,5};
	int b[5] ={10,20,30,40,50};
	int *sum;
	int c[5];
	cout<<"addition calling"<<endl;
	sum = add(a,b);
	cout<<"addition calling 123"<<endl;
	
	for(int i=0; i<5; i++)
	{
	    c[i]=*(sum+i);
	}
	cout<<"addition done"<<endl;
	for(int i=0;i<5; i++)
    {
        cout<<c[i]<<" ";
    }
	return 0;
}

int * add(int *x, int *y)
{
    static int s[5];
    cout<<"inside add function"<<endl;
    for(int i=0;i<5; i++)
    {
        s[i]=x[i]+y[i];
    }
    
    return (s);
}
