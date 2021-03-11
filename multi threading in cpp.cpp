#include <iostream>
using namespace std;
#include <thread>


void threadfun(int &value)
{
    cout<<"Inside thread"<<endl;
    cout<<"thread1: "<<value<<endl;
    value++;
    cout<<"thread2: "<<value<<endl;
}
int main() {
	// your code goes here
	int data=2;
	thread t1(threadfun, ref(data));
	t1.join();
	cout<<"main: "<<data<<endl;
	
	return 0;
}
