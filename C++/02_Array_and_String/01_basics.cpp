#include <iostream>
using namespace std;

void print_default_value(int *arr){  // int arr[]  -> we can pass this also
    int size_of_arr = sizeof(arr)/sizeof(arr[0]); // wrong size of array because of pointer
    cout << "size of arr " << size_of_arr << endl;
    for(int index=0; index < 5; index++){
        if(arr[index] == 0){
           cout << arr[index] << " is default value" << endl;
        }
        else{
            cout << "it is a garbeg or assigned value " << arr[index] << endl;
        }
    }
}

int **print_array(int **arr){
    for(int i=0; i < 5; i++){
        for(int j=0; j < 5; j++){
            cout << arr[i][j] << ", ";
        }
        cout << endl;
    }
    return arr;
}

int main(){

    //  # ===== TYPE of Defination ==== # 
    int arr1[5] = {}; 
    int arr2[5] = {1, 2, 3, 4}; // value of 5th index is not given so it will be ZERO "0" by default
    int arr3[] = {1, 2, 3, 4}; // arr3 is reference, pointing to array but we can not modify it.  int& reference = variable 
    int *arr = new int[5]; // dynamic memory allocation mainly use when size of array is not fix
    int arr4[5][5] = {
        {11, 12, 13, 14, 15},
        {21, 22, 23, 24, 25},
        {31, 32, 33, 34, 35},
        {41, 42, 43, 44, 45},
        {51, 52, 53, 54, 55}
    };
    
    int *arrM2 = arr3;
    // delete[] arr3; // can not delete static memory arr3

    int **arrM = new int*[5];
    for(int i=0; i<5; i++){
        arrM[i] = arr4[i]; 
    }
    // for(int i=0; i<5; i++){
    //     delete[] arr4[i];   // can not delete static memory arr4[i]
    // } 
    // delete[] arr4; // can not delete static memory arr4

    
    // # ==== Search, Insertion and Access ==== #
    print_default_value(arr);
    print_default_value(arrM2);  // print_default_value has for loop of 5 but still accepts array of 4 and does't throw an error.
    print_array(arrM);
    // int **arrMM = print_array(arrRef);

    return 0;
}


// ==== Advantage ==== //
// locality of reference : a processor to access the same set of memory locations repetitively over a short period of time
// array have allow random access to elements and better cache locality which makes a pretty fast

// ==== DisAdvantage ==== //
// can not change size of array after declared.
// shifting operation is too costly.

// Note : Associative Array in C++ know as STL map and dictionaries.