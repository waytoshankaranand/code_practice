#include <iostream>
#include <list>
using namespace std;

int main() {
	// your code goes here
	list<int> l;
	l.push_back(10);
	l.push_back(20);
	l.push_back(30);
	l.pop_back();
	l.push_front(2);
	l.push_front(4);
	l.pop_front();
	cout<<"front: "<<l.front()<<endl;
	cout<<"back: "<<l.back()<<endl;
	
	l.sort();
	list<int> :: iterator it=l.begin();
	
	while(it!=l.end())
	{
	    cout<<*it<<" ";
	    it++;
	}
	return 0;
}
