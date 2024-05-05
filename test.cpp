#include <iostream>
#include <vector>
#include <utility> // for pair
using namespace std;

void explainVector(){
    vector<int> v;           // creates an empty container {}

    v.push_back(1);                     // {} --> {1}   1 is inserted inside the vector  
    v.emplace_back(2);                  // {1} --> {1,2}  dynamically size is increased and 2 is inserted at the end

    // Print each element of the vector
    cout << "Vector v: ";
    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    // vector of pair datatype 
    vector<pair<int, int>> vec;        
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int> v1(5,20);
    vector<int> v2(v1);
    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << " ";
}

int main() {
    // Call the explainVector() function
    explainVector();
    return 0;
}
