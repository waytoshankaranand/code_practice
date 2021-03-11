#include <iostream>
#include <memory>
using namespace std;

class student
{
    int roll;
    int sec;
    public:
    student(int r=0, int s=0)
    {
        roll= r;
        sec= s;
    }
    void display()
    {
        cout<<roll<<" "<<sec<<endl;
    }
};

int main() {
	// your code goes here
	shared_ptr <student> p1(new student(2,4));
	p1->display();
	
	shared_ptr <student> p2;
	p2= p1;
	p1->display();
	cout<<p1.use_count();
	
	
	return 0;
}
