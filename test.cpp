#include <iostream>
#include <string>
using namespace std;

void symmetry(int n) {
    // Write your code here.
    int space =0;
    for (int i =0; i<n; i++){
        // stars
        for (int j=1; j<=n-i; j++){
            cout << "*";
        }
        // space
        for (int j=0;j<space;j++){
            cout << " ";
        }
        //stars
        for (int j=1;j<=n-i;j++){
            cout << "*";

        }
        space +=2;
        cout << endl;
    }


    
    int space2 = 2*n -2;
    for (int i=0; i<n ; i++){
        for (int j=0; j<=i; j++){
            cout<< "*";
      }
    //   space
    for (int j=0; j<space;j++){
        cout << " ";
        //stars
    for(int j=0; j<=i;j++){
        cout << "*";
    }
    space2 -=2;
    cout << endl;
    }
    }



}
int main(){
    int n;
    cin >> n;
    symmetry(n);
}
