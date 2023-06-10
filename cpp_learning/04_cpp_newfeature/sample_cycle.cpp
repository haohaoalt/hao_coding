#include <iostream>
using namespace std;
int main(){
	int arr[10] = {1,2,3,4,5,6,7,8,9};
	cout << "normal cycle: " << endl;
	for (int i = 0;i < sizeof(arr)/sizeof(arr[0]);i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	 cout << "sample cycle:" << endl;
	for(auto n:arr){
		cout << n << " ";
	}
}
