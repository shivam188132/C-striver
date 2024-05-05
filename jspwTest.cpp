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
    v.emplace_back(2);                  // --> {1} --> {1,2}  dynamically size is increased and 2 is inserted at the end
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

    vector< int> v(5,100);
    vector < int> v(5);
    vector<int> v1(5,20);
    vector<int> v2(v1);
    vector<int>::iterator it = v.begin();
    it++;
    // cout << *(it)<< " ";

}

int main(){
    // explainPair();
    // explainPairs2();
    // explainPair3();
    explainVector();
    return 0;

}