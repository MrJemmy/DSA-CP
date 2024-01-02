#include<iostream>
#include<vector>

using namespace std;


int main(){

    vector<int>* v1 = new vector<int>({1, 2, 3, 4, 5, 6});

    cout << "Size of Pointer : " << sizeof(v1) << endl;
    cout << "Size of Vector : " << v1->size() << endl;
    for(vector<int>::iterator itr=v1->begin(); itr!=v1->end(); itr++){
        cout << *itr << endl; 
    }
    cout << "value at 4th index : " << v1->at(4) << endl;

    delete v1;

    return 0;
}