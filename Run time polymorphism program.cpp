#include <iostream>
using namespace std;

int main()
{
    
    class car{
        
        int a;
        public:
        virtual int fun()
        {
            printf("base \n");
        }
    };
    
    class tata : public car{
        public:
        int fun()
        {
            printf("derived \n");
        }
    };
    
    car *c1;
    tata t1;
    c1 = &t1;
    c1->fun();
    t1.fun();
    
    return 0;
}