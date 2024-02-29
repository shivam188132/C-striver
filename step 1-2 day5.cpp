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