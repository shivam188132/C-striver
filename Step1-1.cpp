#include<iostream>
// #include<iostream> just a library for input and output printing
// for any library tye #include<library_name>
// ex. #include<math.h>, #include<string>

/* int main() {

    std:: cout<< "Hey, Striver";
    return 0;
}

*/

using namespace std;

/* int main(){

    cout<< "Hey Striver" << endl << "Hey Raj!" << "\n";
    cout<< "Hey Shivam!";
} */

// for adding new line we use endl or "\n" character
// for doing multiple line comments press Shift + Alt + A

// for printing two variable x and y

/* int main(){

    int x,y ;
    cin >> x >> y;
    cout << "value of x: " << x << " and y: " << y;
    return 0;
} */


// for including all the libraries that cpp has
// we use 
// #include <bits/stdc++.h>


// int main() {

//     // int x
//     // int has a value b/w -2,147,483,648 to 2,147,483,647 and takes a 4 Bytes as space 
//     // int x = 10;
//     // beyond that range we use long
  
//     long x1;
//     // cin >> x;
//     // long long
//     // long long x = 15000000;
//     cin >> x1 ;
//     cout << "Value of x1: " << x1 << endl;
//     return 0;
// }


// float data type

// int main() {

//     // floating data types
//     float x =5.6;
//     float y ;
//     // double is a expansion of float just for a large value
//     double z = 34.44;
//     cin >> y ;
//     cout <<"Value of y is: " <<  y << endl;
//     cout <<"Value of z is: " <<  z << endl;

//     return 0;
// }


// string data type

// int main(){

//     string s;
//     // only print Hello if input hello Striver was given to print both
//     string s2;

//     cin >> s>> s2;
//     cout << s << " "  << s2;
//     return 0;


// }

int main(){

    // in case for printing togethger in  a line insted of s,s2 we use getline
    string str;
    getline(cin, str);
    cout << str;
    return 0;


}





// ctrl+ shift + b to run