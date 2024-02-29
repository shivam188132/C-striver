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
