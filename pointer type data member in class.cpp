#include <iostream>
using namespace std;

class student
{
    
    int roll;
    int *sec;
    
    public:
    student(int r = 4, int s=4)//Default Constructor
    {
    roll=r;
    sec= new int(s);
    cout<<"New Object is created"<<endl;
    }
    
    void display()
    {
    cout<<"Display called for "<<this->roll <<"roll no: "<<roll<<" sec: "<<*sec<<endl;
    }
    
    student(const student& student1)//Copy Constructor
    {
        roll = student1.roll;
        sec = new int(*(student1.sec));
        cout<<"Copy Constructor is called for "<< this->roll<<endl;
    }
    
    student& operator= (const student& student1)
    {
        if(this== &student1)
        {
            return *this;
        }
        roll = student1.roll;
        sec = new int(*(student1.sec));
        cout<<"Assignment Operator is called for "<< this->roll<<endl;
        return *this;
    }
    
    ~student()
    {
        cout<<"Destrutor is called for: "<<this->roll<<endl;
        delete sec;
    }

    
};
	
	
int main() {
	// your code goes here
	
student s1;
s1.display();
student s2(3,3);
s2.display();
student s3(s1);
s3.display();
student s4;
s4=s2;
s4.display();


	return 0;
}
