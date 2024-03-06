#include <bits/stdc++.h>
using namespace std;

/*

* * * 
* * * 
* * * 

*/


void nForest(int n) {
	// Write your code here.
	// int n;
	
	int i,j;
	
	for(i=0 ;i<n; i++){
		for (j=0 ;j<n ;j++){
			cout << '*' << " ";
		}
		cout << endl;
	}
}

int main(){
    int n;
    cin >> n;
    nForest(n);
}


/*

* 
* * 
* * * 

*/

void nForest2(int n) {
	// Write your code here.
	int i ,j;
	for (i=0; i<n; i++){
		for (j=0;j<=i; j++){
			cout << "* ";
		}
		cout << endl;
	}
}

int main(){
    int n;
    cin >> n;
    nForest2(n);
}


/*

1
1 2 
1 2 3

*/

void nTriangle(int n) {
	// Write your code here
	int i,j;
	for (i=0; i<n; i++){
		for (j=0; j<=i; j++){
			cout << j+1<< " ";
		}
		cout << endl;
	}
}

int main(){
    int n;
    cin >> n;
    nTriangle(n);
}


/*
1
2 2 
3 3 3

*/

void triangle2(int n) {
	// Write your code here
	int i ,j;
	for (i=0; i<n ; i++){
		for (j=0 ; j<=i ; j++ ){
			cout << i+1<< " ";
		}
		cout << endl;
	}
}

int main(){
    int n;
    cin >> n;
    triangle2(n);
}

/*

* * *
* *
*

*/

void seeding(int n) {
	// Write your code here.
	int i,j;
	 for (int i = 0; i < n; i++) {
        // Adjust the inner loop to print '*' until n - i
        for (int j = 0; j < n - i; j++) {
          cout << "* "; // Print '*'
        }
        cout << endl; // Move to the next line after each row
         }
}


/* 

Problem statement
Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the N-Star Triangle.

Example:
Input: ‘N’ = 3

Output: 

  *
 ***
***** 

*/

void nStarTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl; // Move to the next line after each row
    }
}


/* 

Problem statement
Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the Reverse N-Star Triangle.

Example:
Input: ‘N’ = 3

Output: 

*****
 ***
  *
  
 */



int main(){
    int n;
    cin >> n;
    nStarTriangle(n);
}


void nStarTriangle(int n) {
    // Write your code here.
	for (int i=0;i<n;i++){
		// space
		for(int j=0;j<i;j++){
			cout << " ";
		}
		// star
		for (int k=0;k < 2*n- (2*i+1);k++){
			cout << "*";
		}
		cout << endl;
	}
    
}

/* 

Problem statement
Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the N-Star Diamond.

Example:
Input: ‘N’ = 3

Output: 

  *
 ***
*****
*****
 ***
  *

 */


void nStarDiamond(int n) {
    // Write your code here.
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl; // Move to the next line after each row
    }

    for (int i=0;i<n;i++){
		// space
		for(int j=0;j<i;j++){
			cout << " ";
		}
		// star
		for (int k=0;k < 2*n- (2*i+1);k++){
			cout << "*";
		}
		cout << endl;
	}
}


void nStarTriangle(int n) {
    // Write your code here.
    for (int i=1;i<2*n-1;i++){
      int stars =i;
      if (i>n) stars =2*n - i ;
      for (int j=1; j<= stars; j++){
        cout << "*";
      }
      cout << endl;
    }
}

// m2
void nStarTriangle(int n) {
    // Upper triangle
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    // Lower triangle
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}


/*

Output: 

1         1
1 2     2 1
1 2 3 3 2 1

*/
void numberCrown2(int n) {
    // Write your code here.
    // declare spaces
    int space = 2*n-1;
    //how many times loop runs
    for (int i=1; i<=n;i++){
        for (int j=1; j<=i; j++){
            cout << j;
        }

    //spaces
    for (int j=1; j<=space; j++){
        cout << " ";
    }
    //numbers
    for (int j=i; j>=1; j--){
        cout << j;
    }
    cout << endl;
    space -=2;

    }

}


/*

Output: 

1
2 3
4 5 6

*/

void nNumberTriangle(int n) {
    int num =1;
    // Write your code here.
    for(int i=1; i<=n ;i++){

        for (int j=1; j<=i;j++){
            cout << num<< " ";
            num = num+1;
            
        }
        cout << endl;
    }
}


/*

Output: 

A
A B
A B C

*/

void nLetterTriangle(int n) {
    // Write your code here.
    for (int i=0; i<n ;i++){

        for (char ch ='A'; ch <='A'+i; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}







int main(){
    int n;
    cin >> n;
    //  nNumberTriangle12(n);
}
