#include <iostream>
using namespace std;


int main(){

    //  # ===== TYPE of Defination ==== # 
    int arr1[5] = {};
    int arr2[5] = {1, 2, 3, 4}; // value of 5th index is not given so it will be ZERO "0" by default
    int arr3[] = {1, 2, 3, 4};
    int *arr = new int[5]; // dynamic memory allocation mainly use when size of array is not fix

    // # ==== Search, Insertion and Access ==== #
    int size_of_arr = sizeof(arr)/sizeof(arr[0]);
    cout << "size of arr " << size_of_arr << endl;
    for(int index=0; index < 4; index++){
        if(arr[index] == 0){
           cout << arr[index] << "is default value" << endl;
        }
        else{
            cout << "it is a garbeg value" << &arr[index] << endl;
        }
    }

    return 0;
}


// ==== Advantage ==== //
// locality of reference : a processor to access the same set of memory locations repetitively over a short period of time
// array have allow random access to elements and better cache locality which makes a pretty fast

// ==== DisAdvantage ==== //
// can not change size of array after declared.
// shifting operation is too costly.

// Note : Associative Array in C++ know as STL map and dictionaries.