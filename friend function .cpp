#include <iostream>
using namespace std;

    class car{
        
        int a=10;
        public:
        int fun()
        {
            printf("base \n");
        }
       friend void display(car);
    };
    
    
    void display(car c)
    {
        printf("%d",c.a);
    }
    
    
int main()
{
    car c1;
    display(c1);
    return 0;
}