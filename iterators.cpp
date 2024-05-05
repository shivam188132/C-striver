#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<pair< int, int>> v_p = {{1,2},{2,3},{4,5}};
    vector<pair<int,int>> :: iterator it;
    //it.end() means one space after the end as u rember ---- . this . denotes the it.end()
    // iterators are used to get the elements of vector or any else type datatype 
    for (it = v_p.begin(); it!=v_p.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl;
    }

    
}