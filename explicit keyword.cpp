#include <iostream>
using namespace std;

class student
{
    int id;
    int sec;
    public:
    explicit student(int i=0, int sec= 0)
    {
        id=i;
    }
    void display()
    {
        cout<<id<<" " <<sec<<endl;
    }
};

void fun(student p)
{
    p.display();
}

int main() {
	// your code goes here
	student s(1);
	//s.display();
	//student s2= 2;//wrong assignment but it works due to implicit conversion
	//s2.display();
	
	fun(s);
	
	//fun(200);//wrong assignment, but it works due to implicit conversion
	
	return 0;
}
