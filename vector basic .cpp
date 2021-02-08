#include <iostream>
#include <vector>
using namespace std;


int main() {
	// your code goes here
	vector <int> v1;
	//cout<<v1[0];
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(8);
	v1.push_back(18);
	v1.push_back(28);
	cout<<v1.capacity()<<endl;
	//cout<<v1[0]<<endl;
	v1.pop_back();
	cout<<v1.back()<<endl;
	cout<<"v1 size: " << v1.size()<<endl;
	cout<<"vector-------";
	
	vector<int>:: iterator it = v1.begin();
	v1.insert(it+3, 4);
	cout<<v1[2]<<endl;
	cout<<v1[3]<<endl;
	cout<<v1[4]<<endl;
	
	return 0;
}
