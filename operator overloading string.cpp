#include <iostream>
#include <string.h>

using namespace std;

class str
{
    public:
    char s[20]; 
    
    str(){}
    
    str(char str1[])
    {
        strcpy(this->s, str1);
    }
    
    str operator+ (str &a)
    {
        str c;
        strcat(this->s, a.s);
        strcat(c.s, this->s);
        return (s);
    }

};

    

int main()
{
    char a1[]="hi ";
    char a2[]="hello";
    
    str p(a1);
    str q(a2);
    cout<<p.s <<" "<<q.s<<endl;
    
    str r;
    r=p+q;
    
    cout<<r.s;
}