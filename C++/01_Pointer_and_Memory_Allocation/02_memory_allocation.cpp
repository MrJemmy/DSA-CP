#include <iostream>
using namespace std;

// Static memory allocation use Stack memory (less in size) :- without pointer also we can access this memory but we can not free static memory with delete
// where Dynamic memory Allocation use Heap Memry (Big In Size) :- need pointer to access this memory but we can free up the space.
// pointer get memory from stack and variable with "new" keyword get memory from heap

void callByReff(int &i){
    // &i -> here is get referance of variable we pass 
    // constent can not pass the value by reference it must have define in variable ??
    i++;
}

void callByPointer(int *i, int *j){
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}

int main()
{

    // we can pass variable by reference 
    int i_var = 5;
    int j_var = 10;
    callByReff(i_var); 
    cout << "i_var : " << i_var << endl;

    callByPointer(&i_var, &j_var);
    cout << "i_var : " << i_var << endl;
    cout << "j_var : " << j_var << endl;
    
    // #### Any Variable #### //
    char* charPtr = new char('a');
    int* intPtr = new int(1);
    string* stringPtr = new string("jaimin");
    cout << "charPtr size: " << sizeof(charPtr) << ", char size: " << sizeof(*charPtr) << endl;
    cout << "intPtr size: " << sizeof(intPtr) << ", int size: " << sizeof(*intPtr) << endl;
    cout << "stringPtr size: " << sizeof(stringPtr) << ", string size: " << sizeof(*stringPtr) << endl;
    delete intPtr;
    delete charPtr;
    delete stringPtr;


    // #### 1d array #### //

    //  Variable array only made using dynamic memory allocation
    int* a = new int[5];
    cout << a << "-"<< *a << "-"<< a[0] << endl;
    delete []a;


    // #### 2D array #### //

    // 2D Array Dyanamic memory Allcation
    int** arr = new int*[5]; // this is kind of array of pointer 
    for(int i=0; i<5; i++){
        // assiging address to array of pointer
        arr[i] = new int[5];
    }

    // to print 2d array
    cout << arr << "-"<< *arr << "-" << **arr << endl;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout << arr[i][j] << ", "; 
        }
        cout << endl;
    }

    // To deallocate 2D array memory
    for(int i=0; i<5; i++)
        delete[] arr[i];
    delete[] arr;

    return 0;
}


// #### BAD Practice ####

// Bad Practice :- returning reference
int &returnReff()
{
    int j = 10;
    int &i = j;

    return i;
}

// Bad Practice :- returning pointer
// It help to return an array pointer : * for singel dimention and ** for multi dimention
int *returnPointer(int i)
{
    int *j = &i;

    return j;
}