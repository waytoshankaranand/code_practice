#include <iostream>
#include <array>
using namespace std;

int main() {
	// your code goes here
	array<int, 5> arr = {10, 20, 30, 40, 50};
	cout<<"size: "<< arr.size()<<endl;
	cout<<"at pos 2: "<<arr.at(2)<<endl;
	cout<<"front: "<<arr.front()<<endl;
	cout<<"back: "<<arr.back()<<endl;
	cout<< "at ps 4: "<<arr[4]<<endl;
	
	array<int, 5> arr1={1,2,3,4,5};
	arr.swap(arr1);
	cout<<"arr pos 2: "<<arr[2]<<endl; 
	return 0;
}
