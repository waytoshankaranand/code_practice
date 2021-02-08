#include <iostream>
#include <map>
using namespace std;

int main() {
	// your code goes here
	map<int, string> m;
	m[1]="Ram";
	m[2]="Sita";
	m[3]="Shyam";
	m[4]="Radha";
	
	//iterator
	map<int, string> :: iterator it=m.begin();
	
	for(int i=0; i<m.size();i++) //loop until size of map
	{
	    cout<<it->second<<" ";
	    it++;
	}
	return 0;
}
