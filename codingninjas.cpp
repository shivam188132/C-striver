// Problem statement
// Write a program that takes a character as input and prints 1, 0, or -1 according to the following rules.



// 1, if the character is an uppercase alphabet (A - Z).
// 0, if the character is a lowercase alphabet (a - z).
// -1, if the character is not an alphabet.

// -------------------------------------------------
#include<bits/stdc++.h>
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


// Problem statement
// Programming languages have some conditional / decision-making statements that execute when some specific condition is fulfilled.



// If-else is one of the ways to implement them.



// You are given two numbers 'a' and 'b'.



// Compare the numbers and print the relation.



// Print “smaller”, “greater” or “equal” when ‘a’ is smaller than ‘b’, greater than ‘b’, or equal to ‘b’ respectively.


// ---------------------------------------------------------------------------------------------------------


string compareIfElse(int a, int b) {
	// Write your code here
	if (a < b) {
		return "smaller";
	}

	else if (a >b ) {
		return "greater";
	}
	
	else { return "equal"; }
}

// Problem statement
// Programming languages have some conditional / decision-making statements that execute when some specific condition is fulfilled.
// Switch-case is one of the ways to implement them.
// In a menu-driven program, the user is given a set of choices of things to do (the menu) and then is asked to select a menu item.
// There are 2 choices in the menu:
// Choice 1 is to find the area of a circle having radius 'r'.
// Choice 2 is to find the area of a rectangle having dimensions 'l' and 'b'.
// You are given the choice 'ch' and an array 'a'.
// If ‘ch’ is 1, ‘a’ contains a single number ‘r’. If ‘ch’ is 2, ‘a’ contains 2 numbers, ‘l’ and ‘b’.
// Consider the choice and print the appropriate area.
// Example :
// Input: ‘ch’ = 2 and ‘a’ = [3, 2]
// Output: area = 6
// Explanation: Since the choice ‘ch’ is 2, we have to print the area of the rectangle having ‘l’ = 3 and ‘b’ = 2, which is 6.


// ------------------------------------------------------------------------------------------------------------



double areaSwitchCase(int ch, vector<double> a) {
	// Write your code here
	switch (ch ) {

		case 1:
		// area of circle
			return M_PI *a[0]*a[0];
			break;

		case 2:

			return a[0]*a[1];
			break;

		default:
		
			return 0;
	}
	
}