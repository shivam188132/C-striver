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

void Iteratorexample1(){
    vector<pair< int, int>> v_p = {{1,2},{2,3},{4,5}};
    vector<int>v_p2 = {1,2,3,4,5};
    vector<int> :: iterator it2;
    vector<pair<int,int>> :: iterator it;
    
    //it.end() means one space after the end as u rember ---- . this . denotes the it.end()
    // iterators are used to get the elements of vector or any else type datatype 
    for (it2 = v_p2.begin(); it2!=v_p2.end(); ++it2){
        
        cout << *(it2) << endl;
    }
    for (it = v_p.begin(); it!=v_p.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl;
        
    }
    
}


void Iteratorexample2(){

    vector<int> v= {1,2,3,4,5,6,7,8};
    // vector<int> :: iterator it;
    // if i dont want to define this in a seprate line --> vector<int> :: iterator it;
    // then i have to write a code inside for loop that will be
    // for (vector<int> :: iterator it = v.begin(); it !=v.end(); it++)
//  ot c++ stl have auto feature for this as written in next line
    for (auto it =v.begin(); it !=v.end(); it++){
        cout << *(it)<< endl;
    }
    for( auto it : v){
        cout << it << " ";
    }
}

void eraseExample(){

    vector<int> v= {10,20,12,23};
    v.erase(v.begin()+1);       // 10 12 23 
    // v.emplace_back(30,40);   --> gives compilation error cause it can only add one element at once
    v.emplace_back(30);   
    v.emplace_back(40);      // 10 12 23 30 40 

    v.erase(v.begin()+2, v.begin() +3);   // 10 12 30 40 
    // this code is going to cut the segment like -->[start, end)
    // 10 12 {23} 30 40
    //  0  1  2  3  4
    // if you want to target both 23 and 30
    // try
    // v.erase(v.begin()+2, v.begin() +4) 
    // it will cut 10 12 {23 30} 40
    //              0  1   2  3   4


    for( auto it : v){
        cout << it << " ";
    }

}
// Insert function

void Insertexample(){

    vector<int> v(2,100);    // {100,100}
    v.insert(v.begin(), 300);  // {300, 100, 100}
    

}







int main(){
    // explainPair();
    // explainPairs2();
    // explainPair3();
    // explainVector();
    // explainVector2();

    return 0;

}