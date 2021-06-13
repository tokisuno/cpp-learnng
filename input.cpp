#include<iostream>

using namespace std;

int main(){
	char firstName[30], lastName[30];

	cout << "what is your first name?: " << endl;
	cin >> firstName;
	cout << "what is your last name?: " << endl;
	cin >> lastName;

	cout << "HI " << firstName << " " << lastName << endl;

	return 0;
}
