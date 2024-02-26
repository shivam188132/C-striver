// Problem statement
// Write a program that takes a character as input and prints 1, 0, or -1 according to the following rules.



// 1, if the character is an uppercase alphabet (A - Z).
// 0, if the character is a lowercase alphabet (a - z).
// -1, if the character is not an alphabet.

// -------------------------------------------------
#include<iostream>
using namespace std;

int main() {
	// Write your code here
	char ch;
	cin >> ch;
	if (ch >= 'A' && ch <= 'Z')
	{cout << '1'<< endl;}
	else if (ch>='a' && ch<='z')
	{
		cout << '0'<< endl;
	}
	else {
        cout << "-1" << endl;
    }

    

    return 0;
	
}
// -----------------------------------------------------------------------------

// Problem statement
// Data type refers to the type of value a variable has and the way the computer interprets it.



// Each data type has a different size. You’ve studied 5 different data types and the sizes of the data types:

// Integer: 4 bytes
// Long: 8 bytes
// Float: 4 bytes
// Double: 8 bytes
// Character: 1 byte


// ----------------------------------------------------------------------------------
int dataTypes(string type) {
	cin >> type;
    // Write your code here
    if (type == "Integer" || type == "Float") {
        return 4;
    }
    else if (type == "Long" || type == "Double") {
        return 8;
    }
    else if (type == "Character"){
        return 1;
    }
    return 0;
}