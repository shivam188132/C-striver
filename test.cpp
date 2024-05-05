#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v3(5, 20); // {20 20 20 20 20}
    vector<int> v4(v3);    // {20 20 20 20 20}

    cout << "Elements of v3: ";
    for (int i = 0; i < v3.size(); ++i) {
        cout << v3[i] << " ";
    }
    cout << endl;

    cout << "Elements of v4: ";
    for (int i = 0; i < v4.size(); ++i) {
        cout << v4[i] << " ";
    }
    cout << endl;

    return 0;
}
