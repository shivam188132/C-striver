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



#include<bits/stdc++.h>
using namespace std;




// Function to calculate the nth Fibonacci number



// Problem statement
// The n-th term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -

//     F(n) = F(n - 1) + F(n - 2), 
//     Where, F(1) = 1, F(2) = 1


// Provided 'n' you have to find out the n-th Fibonacci Number. Handle edges cases like when 'n' = 1 or 'n' = 2 by using conditionals like if else and return what's expected.

// "Indexing is start from 1"


// Example :
// Input: 6

// Output: 8

// Explanation: The number is ‘6’ so we have to find the “6th” Fibonacci number.
// So by using the given formula of the Fibonacci series, we get the series:    
// [ 1, 1, 2, 3, 5, 8, 13, 21]
// So the “6th” element is “8” hence we get the output.



// ------------------------------------------------------------------------------------

int fibonacci(int n) {
    // Base cases: F(1) = 1 and F(2) = 1
    if (n == 1 || n == 2) {
        return 1;
    } else {
        // Recursive case: F(n) = F(n-1) + F(n-2)
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}



int main()
{
        
    int n;

    // Get input for the nth term
    
    cin >> n;

    // Call the fibonacci function to find the nth term
    int nth_term = fibonacci(n);

    // Print the result
    cout << nth_term << endl;

    return 0;
}


/*
Problem statement
Write a program to input an integer 'n' and print the sum of all its even digits and the sum of all its odd digits separately.



Digits mean numbers, not places! That is, if the given integer is "132456", even digits are 2, 4, and 6, and odd digits are 1, 3, and 5.

Constraints
0<= 'n' <=10000


Example :
Input: 'n' = 132456

Output: 12 9

Explanation:
The sum of even digits = 2 + 4 + 6 = 12
The sum of odd digits = 1 + 3 + 5 = 9
Constraints
0<= 'n' <=10000
*/

#include<iostream>
using namespace std;

int main() {
	int i;
	cin >> i;
	int sum_even =0, sum_odd =0;

	// looping through each digit
	while(i>0){
		// extract the last digit
		// suppose 143 then 143%10 is 3
		int digit = i%10;
		if (digit % 2 ==0){
			sum_even +=digit;
		}
		else {
			sum_odd +=digit;
		}
		// removing last digit 
		i /=10; 

	}
	cout << sum_even << " "<< sum_odd;

	return 0;
	
}


/*
Problem statement
Sam is making a forest visualizer. An N-dimensional forest is represented by the pattern of size NxN filled with ‘*’.

For every value of ‘N’, help sam to print the corresponding N-dimensional forest.

Example:
Input: ‘N’ = 3

Output: 
* * *
* * *
* * *
*/

// ----------------------------------------------------------------

void nForest(int n) {
	// Write your code here.
	// int n;
	cin >> n;
	int i,j;
	
	for(i=0 ;i<n; i++){
		for (j=0 ;j<n ;j++){
			cout << '*'<< " ";
		}
		cout << endl;
	}
}
