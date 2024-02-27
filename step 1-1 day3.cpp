#include <bits/stdc++.h>
using namespace std;
// functions 
// functions are used to modularise code
// functions are used to increase readability
// functions are used to use same code multiple times
// types of functions
// void --> which does not returns anything
// return
// parameterised --> adding parmeters inside the functions like name in this case
// non parameterised



void printname(){
    cout << "Hey Striver " << endl;
}

int main(){

   printname(); 
   return 0;
}


void printname(string name){

    cout << "Hey " << name<< endl;
}


int main(){

    string name;
    cin >> name;
    printname(name);

    string name2;
    cin >> name2;
    printname(name2);
    return 0;
}


// take 2 numbers and print its sum

int main() {

    int num1, num2;
    cin >> num1 >> num2;
    int num3 = num1 + num2;
    cout << num3;
    return 0;
}


// creating sum funcitons

int sum(int num1, int num2) {

    int num3 = num1 + num2 ;
    return num3;
}


int main() {

    int num1, num2;
    cin >> num1 >> num2;
    int res = sum(num1, num2);
    cout << res;
    return 0;
}


// some inbuilt functions 

// min

int main() {

    int num1, num2;
    cin >> num1 >> num2;
    int res = min(num1, num2);
    cout << res;
    return 0;
}

// max

int main() {

    int num1, num2;
    cin >> num1 >> num2;
    int res = max(num1, num2);
    cout << res;
    return 0;
}


// creating our own max function

int maxx(int num1, int num2) {

    if(num1>=num2) 
    {return num1;}
    else
    // we can also write it without braces {}
    return num2;
}
int main() {
    int num1, num2;
    cin >> num1 >> num2;
    int res = maxx(num1, num2);
    cout << res;
    return 0;
}


// alwaus make sure your functions returns something at the end or else it will pop out some garbage values


// Functions ( Pass by reference and value)

// its meaning 
//  pass by value


void dosomething(int num) {
    // cout << num << endl;
    int i;
    for ( i=num ; i<=25; i+=5){
        cout<<  i << endl;
    }
}

int main(){

    int num=10;
    dosomething(num);
    cout << num << endl;
    return 0;
}

// it will print like 10 15 20 25 and at the end 10.
// why the last value printed is 10? it should be 25 na
// after line 138 it will create a instance of 10 and sent it to the function keeping the original value with it .
// thats why 10 is printed
// This is known as pass by value



// pass by reference 

void dosomething2(int &num) {
    // cout << num << endl;
   
    for ( num ; num<=25; num+=5){
        cout<<  num << endl;
    }
}

int main(){

    int num=10;
    dosomething2(num);
    cout << num << endl;
    return 0;
}

// it will print like 10 15 20 25 and at the end 30.
// hence updating with the refernce value which is 25 +5 meaning 30 inside the function.