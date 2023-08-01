#include<iostream>
#include<cctype>
using namespace std;

int main() {
	// Write your code here
	char x=0;
	cin >> x;
	if (isupper(x))
		cout << "1";
	else if (islower(x))
		cout << "0";
	else
		cout << "-1";
}