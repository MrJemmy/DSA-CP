#include <iostream>
using namespace std;

// Use of Costent in OOPS and other 

// 1. Size of class
class EmptyClass{
    // Empty Class Allways 1 Byte 
};

class VarClass{
    // class size of 8 Byte
    int i = 5 ; // 4 Byte
    char c = 'c'; // 1 Byte BUT count as 4 Byte -> because of Padding
    string str;
};

class DynamicClass{
    // class size of 16 Byte
    int* i = new int(5); // 8 Byte in stack but 4 byte in Heap is not count
    char* c = new char('c'); // 8 Byte in stack but 1 byte inb heap is not count

    void removeAllocation(){
        delete i;
        delete c;
    }
};

class EmptFunClass{
    public:
        string str = "jaimin";  // Stings get 32 Byte of memory 
        void func(){
            // in side function variable are not count in size of class
            int a = 10; 
        }

};

int main(){

    EmptyClass emptuclass;
    cout << sizeof(emptuclass) << endl;
    VarClass varclass;
    cout << sizeof(varclass) << endl;
    DynamicClass dynamicclass;
    cout << sizeof(dynamicclass) << endl;
    EmptFunClass emptyclass;
    cout << sizeof(emptyclass) << endl;



    return 0;
}


// Size of Empty class is 1Byte
// TODO : Size of Classes : 1. Padding, 2.Greedy alignement -> How to use both in C++ 