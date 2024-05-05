#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <utility> // for pair, make_pair
#include <vector>  //for vectors



// pairs
void explainPair(){
    pair< int,int> p = {1,30};
    cout << p.first << " " << p.second;

}

// pairs type 2
void explainPairs2(){
    pair <int, pair<int,int>> p ={10,{20,40}};
    cout<< p.first << ' ' << p.second.first << " " << p.second.second;
}

// array pair

void explainPair3(){
    pair<int, int> arr[] = {{1,2}, {2,50},{6,4}};
                        //    0       1     2

    cout << arr[1].second;
}


// vectors
// once an array is defined in cpp we cannot add or remove elements 
// for this vectors are used

void explainVector(){
    vector<int> v;           // --> creates an empty container {}
    //  datatype name

    v.push_back(1);                     // {}--> {1}   1 is inserted inside the vector  
    v.emplace_back(90);                  // --> {1} --> {1,90}  dynamically size is increased and 90 is inserted at the end
    // Print each element of the vector
    cout << "Vector v: ";
    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    // vector of pair datatype 
    vector<pair<int, int >> vec;        
    vec.push_back({1,2});
    vec.emplace_back(1,2);
    cout << "Vec v: ";
    for(int i = 0; i < vec.size(); ++i) {
        // cout << vec[i] << " "; syntax error
        // In C++, you can't directly output a pair using cout without specifying how you want it to be formatted. You need to access the elements of the pair (first and second) and output them individually.
        cout << "(" << vec[i].first << ", " << vec[i].second << ") ";
    }
    cout << endl;

    vector< int> v1(5,100);   // {100 100 100 100 100}
                              //   0   1   2   3   4
    
    vector < int> v2(5);      // {0 0 0 0 0} can take any garbage value if not specified for instance here it is taken as 0


    vector<int> v3(5,20);     // {20 20 20 20 20}
    vector<int> v4(v3);      //  vector<int> v4(v3);: This line creates a new vector v4 and initializes it with the contents of vector v3. This is known as copy initialization. So, v4 will also contain {20, 20, 20, 20, 20}
    
}

void explainVector2(){
    vector<int> v1 = {20, 10, 15, 6, 7};
    // iterator points to the memory where the value is stored not on the value  
    vector<int>::iterator it = v1.begin();
    it++;
    cout << (*it)<< " ";

}

int main(){
    // explainPair();
    // explainPairs2();
    // explainPair3();
    // explainVector();
    explainVector2();

    return 0;

}