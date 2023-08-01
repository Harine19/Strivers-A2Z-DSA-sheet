#include<iostream>
#include<cctype>
using namespace std;

int dataTypes(string type) {
	// Write your code here
	string y;
	for (char x : type) {
        y+=tolower(x);
    }
	if (y == "long" || y == "double")
		return 8;
	else if (y == "character")
		return 1;
	else if (y == "float" || y == "integer")
		return 4;
	else
		return 0;
}
