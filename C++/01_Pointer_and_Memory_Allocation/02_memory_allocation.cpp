#include <iostream>
using namespace std;

// Static memory allocation use Stack memory (less in size) :- without pointer also we can access this memory
// where Dynamic memory Allocation use Heap Memry (Big In Size) :- need pointer to access this memory
// pointer get memory from stack and variable with "new" keyword get memory from heap

void passByReff(int &i){
    // &i -> here is get referance of variable we pass 
    // constent can not pass the value by reference it must have define in variable ??
    i++;
}

int main()
{

    // we cab pass variable by reference 
    int i_var = 5;
    passByReff(i_var); 
    cout << i_var << endl;
    
    // #### Any Variable #### //
    char* charPtr = new char('a');
    int* intPtr = new int(1);
    string* stringPtr = new string("jaimin");

    delete intPtr;
    delete charPtr;
    delete stringPtr;


    // #### 1d array #### //

    //  Variable array only made using dynamic memory allocation
    int* a = new int[5];
    delete []a;


    // #### 2D array #### //

    // 2D Array Dyanamic memory Allcation
    int** arr = new int*[5]; // this is kind of array of pointer 
    for(int i=0; i<5; i++){
        // assiging address to array of pointer
        arr[i] = new int[5];
    }
    // To deallocate 2D array memory
    for(int i=0; i<5; i++)
        delete[] arr[i];
    delete[] arr;

    return 0;
}


// #### BAD Practice ####

//  Bad Practice :- returning reference
int &returnReff()
{
    int j = 10;
    int &i = j;

    return i;
}

//  Bad Practice :- returning pointer
int *returnPointer(int i)
{
    int *j = &i;

    return j;
}