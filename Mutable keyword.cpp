//Mutable and const
#include <iostream>
//#include <string>
using namespace std;

class customer
{
    string name;
    mutable string order;
    int table;
    mutable int bill;
    public:
    
    customer(string n="name", string o= "order", int t = 0, int b= 0)
    {
        name= n;
        order = o;
        table = t;
        bill = b;
    }
    void setorder(string o) const
    {
        order = o;
    }
    
    void setbill(int b) const
    {
        bill= b;
    }
    
    void display() const
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Order: "<<order<<endl;
        cout<<"Table: "<<table<<endl;
        cout<<"Bill: "<<bill<<endl;
    }
};

int main() {
	// your code goes here
	const customer c("Ram", "Ice-Cream", 2, 100);
	c.display();
	c.setorder("Gulab-Jamun");
	c.display();
	customer c2("Shyam");
	c2.display();

	return 0;
}
