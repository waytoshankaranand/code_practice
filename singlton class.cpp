#include <iostream>
using namespace std;

class singlton
{
    int data;
    static singlton *instance;// static variable can exist without object
    singlton()
    {
        data = 0;
        cout<<"An object is created"<<endl;
    }
    public:
    static singlton *getInstance()//static function can access only static data members.
    {
        if(!instance)
            instance=new singlton;
        return instance;
    }
    
    void setData(int value)
    {
        data = value;
    }
    
    int getData()
    {
        return data;
    }
};

singlton *singlton::instance = 0;// A static variable shall be initialized outside the class
int main() {
	// your code goes here
	singlton *s1= s1->getInstance();
	cout<<s1->getData()<<endl;
	s1->setData(4);
	cout<<s1->getData()<<endl;
	singlton *s2= s2->getInstance();
	cout<<s2->getData()<<endl;
	return 0;
}
