// switch statement 
#include<bits/stdc++.h>
using namespace std;

/* take the day no and print the corresponding dat
for 1 print Monday,
for 2 print Tuesday and so on for 7 print Sunday
*/

// int main() {
//     int day;
//     cin >> day;
    
//     switch (day)
//     {
//     case 1:
//         cout << "Monday";
//         break;
//     case 2:
//         cout << "Tuesday";
//         break;

//     case 3:
//         cout << "Wednesday";
//         break;

//     case 4:
//         cout << "Thursday";
//         break;

//     case 5:
//         cout << "Friday";
//         break;

//     case 6:
//         cout << "Saturday";
//         break;
    
//     case 7:
//         cout << "Sunday";
//         break;

//     default:
//         cout << "Invalid";
//         break;
//     }
// }


// arrays and strings

int main(){
    // int a, b, c, d, e;
    // cin >> a >>b >> c >> d >> e;
    // cout << b ;
    // return 0;
    // new and effective method is by using arrays 
    // kind of similar to python list and like numpy library
    int arr[5];
    cin >> arr[0] >> arr[1]>> arr[2] >> arr[3] >> arr[4];
    
    // cout << arr[3];
    arr[3] +=10;
    cout << arr[3] <<endl;
// reassigning the value 
    arr[2] = 13;
    cout << arr[2];
    return 0;

}

// we can change the datatype of arrays like double arr[3], float arr[6] , etc.
