#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    // cout << "Enter an integer: ";
    cin >> num;

    // Convert integer to string
    string numStr = to_string(num);

    // Calculate the length of the string
    int length = numStr.length();

    cout << length << endl;

    return 0;
}