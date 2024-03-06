#include <iostream>
#include <string>
using namespace std;

void nLetterTriangle(int n) {
    // Write your code here.
    for (int i =1; i<=n ;i++){
        for (char ch='A';ch <'A'+ (n-i); ch++)
        {cout << ch<< " ";}

    }
    cout << endl;


}

int main(){
    int n;
    cin >> n;
     nLetterTriangle(n);
}
