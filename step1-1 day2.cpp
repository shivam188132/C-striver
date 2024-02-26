// switch statement 
#include<bits/stdc++.h>
using namespace std;

/* take the day no and print the corresponding dat
for 1 print Monday,
for 2 print Tuesday and so on for 7 print Sunday
*/

int main() {
    int day;
    cin >> day;
    
    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;

    case 3:
        cout << "Wednesday";
        break;

    case 4:
        cout << "Thursday";
        break;

    case 5:
        cout << "Friday";
        break;

    case 6:
        cout << "Saturday";
        break;
    
    case 7:
        cout << "Sunday";
        break;

    default:
        cout << "Invalid";
        break;
    }
}


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



// 2d array

int main() {
    int arr[3][5];
    arr[1][3]= 78;
    cout << arr[1][3]<< endl;
    // garbage values
    // values which are not defined
    cout << arr[1][2];
    return 0;
}


// for strings 

int main() {

    string s = "Striver";
    // cout << s[0] << endl;
    // cout << s[1] << endl;
    // cout << s[2] << endl;

    // to print length of string 
    cout << "Printing length of string" << endl;
    int len = s.size();
    cout << len << endl;
    cout << s[len -1]<< endl;
    // updation 
    s[len -1] = 'Z';
    cout << s << endl;

    return 0;
}

// remember character is always denoted with 'd' like this {single inverted commas}



// for loops

int main() {

    for (int i =1;i<=10;i+=1){
        cout<< "Striver" << endl;
    }

    return 0;
}

int main() {
    int i ;

    for ( i=10 ;i>=0;i-=1){
        cout<< "Striver " << i << endl;
    }
    cout << i ;

    return 0;
}

int main(){
    int i =1;
    while(i<=5) {
        cout << "Stiver " << i << endl;
        i = i+1;

    }
    return 0;
}


// do while loop
// do will make sure the first line will be executed irrepestive of the condition

int main() {
    int i =2;
    do
    {
        cout << "Stiver " << i << endl;
        i +=1;
    } while (i<=1);
    cout << i << endl;
    return 0;
    
}