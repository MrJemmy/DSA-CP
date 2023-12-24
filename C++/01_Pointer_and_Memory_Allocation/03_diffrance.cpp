#include <iostream>
using namespace std;

// Diff B/W  "a" and "&a" and "*a" in function 

void function(int& a){
    // it accept Value it self
    cout << a << " and " << &a << endl;
}

void function1(int& a){
    // it accept Value it self
    cout << a << " and " << &a << endl;
}

void function2(int* a){
    // it accept Address only
    cout << *a << " and " << a << endl;
}


int main(){

    int a1 = 10;
    int *a2 = new int(11);

    function(a1);
    function(*a2);

    function1(a1);
    function1(*a2);     // for "&a" in function pointer need to pass value which it is pointing *a

    function2(&a1);     // for "*a" in function static variable needs to pass by address  &a
    function2(a2);      

    return 0;
}

// TODO :- They all refering to same address , find way they change address