#include<iostream>
using namespace std;
int a = 420;

int main(){

	int a = 69;	
	cout << "value of local a: " << a << endl;
	cout << "value of global a: " << ::a << endl;
	
	return 0;

}
