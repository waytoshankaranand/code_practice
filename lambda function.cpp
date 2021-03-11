#include <iostream>
using namespace std;
#include<functional>


void lambdafun()
{
    function<int(int)> fxsquare = [](int x) ->int {
        return x*x;
    };
    cout<<fxsquare(5)<<endl;
}

void polynomial()
{
    function<int(int,int)> fun = [](int x, int y) ->int {
        int xsquare = [](int x)->int { return x*x; }(x);
        int ysquare = [](int y)->int { return y*y; }(y);
        int twoxy = [](int x, int y)->int { return 2*x*y; }(x,y);
        return xsquare + ysquare + twoxy;
    };
    cout<<"function square: "<<fun(5, 3)<<endl;
}

void poly(int x=0,int y=0 )
{
    function<int(void)> fun2 = [x,y](){
        int xsquare = [x](){ return x*x;}();
        int ysquare = [y](){ return y*y;}();
        int twoxy = [x,y](){ return 2*x*y;}();
        return xsquare + ysquare + twoxy;
    };
    cout<<"poly function: "<<fun2()<<endl;
}
int main() {
	// your code goes here
	[](){
	    cout<<"Lambda Function"<<endl;
	}();
	
	int returnvalue = [](int value){
	    return value+2;
	}(10);
	
	
	lambdafun();
	polynomial();
	poly(1, 1);
	
	cout<<"returnvalue: "<<returnvalue<<endl;
	return 0;
}
