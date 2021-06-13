#include<iostream>
using namespace std;

int var ;

int& fun(){

	return var;
}

int main(){

	fun() = 10;
	cout << "value of var: " << var << endl;

	return 0;
}
