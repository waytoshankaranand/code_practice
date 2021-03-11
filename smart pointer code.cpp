#include <iostream>
using namespace std;

template<class T>
class smartptr
{
    int *ptr;
    public:
    
    explicit smartptr(T* p=NULL)// explicit is used to avoid any implicit conversion.
    {
        ptr=p;
    }
    
    ~smartptr()
    {
        delete ptr;
        cout<<"Object is deleted"<<endl;
    }
    
    T& operator* ()
    {
        return *ptr;
    }
    
    T* operator->()
    {
        return ptr;
    }
};

int main() {
	// your code goes here
	smartptr <int> s_ptr(new int(20));
	//*s_ptr= 20;
	cout<<*s_ptr<<endl;
	return 0;
}
