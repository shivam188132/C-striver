#include <bits/stdc++.h>
using namespace std;

// /*

// * * * 
// * * * 
// * * * 

// */


// void nForest(int n) {
// 	// Write your code here.
// 	// int n;
	
// 	int i,j;
	
// 	for(i=0 ;i<n; i++){
// 		for (j=0 ;j<n ;j++){
// 			cout << '*' << " ";
// 		}
// 		cout << endl;
// 	}
// }

// int main(){
//     int n;
//     cin >> n;
//     nForest(n);
// }


// /*

// * 
// * * 
// * * * 

// */

// void nForest2(int n) {
// 	// Write your code here.
// 	int i ,j;
// 	for (i=0; i<n; i++){
// 		for (j=0;j<=i; j++){
// 			cout << "* ";
// 		}
// 		cout << endl;
// 	}
// }

// int main(){
//     int n;
//     cin >> n;
//     nForest2(n);
// }


// /*

// 1
// 1 2 
// 1 2 3

// */

// void nTriangle(int n) {
// 	// Write your code here
// 	int i,j;
// 	for (i=0; i<n; i++){
// 		for (j=0; j<=i; j++){
// 			cout << j+1<< " ";
// 		}
// 		cout << endl;
// 	}
// }

// int main(){
//     int n;
//     cin >> n;
//     nTriangle(n);
// }


// /*
// 1
// 2 2 
// 3 3 3

// */

// void triangle2(int n) {
// 	// Write your code here
// 	int i ,j;
// 	for (i=0; i<n ; i++){
// 		for (j=0 ; j<=i ; j++ ){
// 			cout << i+1<< " ";
// 		}
// 		cout << endl;
// 	}
// }

// int main(){
//     int n;
//     cin >> n;
//     triangle2(n);
// }

// /*

// * * *
// * *
// *

// */

// void seeding(int n) {
// 	// Write your code here.
// 	int i,j;
// 	 for (int i = 0; i < n; i++) {
//         // Adjust the inner loop to print '*' until n - i
//         for (int j = 0; j < n - i; j++) {
//           cout << "* "; // Print '*'
//         }
//         cout << endl; // Move to the next line after each row
//          }
// }


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







int main(){
    int n;
    cin >> n;
    nStarTriangle(n);
}