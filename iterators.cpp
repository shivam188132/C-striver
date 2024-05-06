#include<bits/stdc++.h>

using namespace std;

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


int main(){

    eraseExample();
    return 0;
    
}