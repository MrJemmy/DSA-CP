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
        Array(T arr[], int s);
        void print();
};

template <typename T> 
Array<T>::Array(T arr[], int s){
    ptr = new T[s];
    size = s;
    for (int i = 0; i < size; i ++){
        ptr[i] = arr[i];
    }
}

template <typename T>
void Array<T>::print(){
    for(int i=0; i<size; i++)
        cout << " " << *(ptr + i);
    cout << endl;
}

// 2. all in one class no "::" oprator
template <typename T>
class Aarray{
    private:
        T* ptr;
        int size;
    public:
        Aarray(T arr[], int s){
            ptr = new T[s];
            size = s;
            for (int i=0; i<size; i++){
                ptr[i] = arr[i];
            }
        }

        void print(){
            for(int i=0; i<size; i++){
                cout<< " " << *(ptr + i);
            }
            cout << endl;
        }
};


int main(){

    // sorting with templates
    int a[5] = {50, 10, 40, 20, 30};
    int a2[5] = {10, 20, 30, 40, 50};
    int n = sizeof(a) / sizeof(a[0]);
    // Templates with Class
    Array<int> obj(a,n);
    Aarray<int> *obj2 = new Aarray<int>(a2,n);

    obj.print();
    obj2->print();

    return 0;
}