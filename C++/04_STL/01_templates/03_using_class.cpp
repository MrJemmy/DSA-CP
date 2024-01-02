#include <iostream>
using namespace std;

// -> Here We are passing array to class and class is making deepcopy od array and create object with that array

// 1. Template releted to class using "::" oprator 
template <typename T>
class Array{
    private:
        T* ptr;
        int size;
    
    public:
        Array(T arr[], int s){
            ptr = new T[s];
            size = s;
            for (int i = 0; i < size; i++){
                ptr[i] = arr[i];
            }
        }
        ~Array(){
            delete []ptr;
        }
        void print(){
            for(int i=0; i<size; i++)
                cout << " " << *(ptr + i);
            cout << endl;
        }
};


int main(){

    // sorting with templates
    int a[] = {50, 10, 40, 20, 30};
    int n = sizeof(a) / sizeof(a[0]);
    
    // Templates with Class
    Array<int> *obj = new Array<int>(a,n);
    
    obj->print();
    delete obj;

    // sorting with templates
    char s[] = {'j', 'a', 'i', 'm', 'i', 'n'};
    int ss = sizeof(s) / sizeof(s[0]);

    // Templates with Class
    Array<char> *obj2 = new Array<char>(s, ss);

    obj2->print();
    delete obj2;

    return 0;
}