#include <iostream>
#include <typeinfo>

using namespace std;

class Xyz {
    public:
        int a = 10;
    void output(){
        cout << a << endl;
    }
};

class Xyza : public Xyz{
    public:
        string a = "string";
    void output(){
        cout << a << endl;
    }
};

int main(){

    // bool
    bool flag;

    // int
    int a;
    short int a1;
    unsigned short int a2;
    unsigned int a3;
    long int a4;
    unsigned long int a5;
    long long int a6;
    unsigned long long int a7;

    // int pointer
    int *ap;
    short int *a1p;

    // char
    char b;
    signed char b1;
    unsigned char b2;
    wchar_t b3; // Wide Character

    // float values 
    float e;
    double f;
    long double f2;

    //string
    string c;
    string xxx;

    // other class
    Xyz xyz;
    Xyza ayza;


    cout << "bool" << endl;
    cout << typeid(flag).name() << endl << endl;
    cout << "int" << endl;
    cout << typeid(a).name() << endl;
    cout << typeid(a1).name() << endl;
    cout << typeid(a2).name() << endl;
    cout << typeid(a3).name() << endl;
    cout << typeid(a4).name() << endl;
    cout << typeid(a5).name() << endl;
    cout << typeid(a6).name() << endl;
    cout << typeid(a7).name() << endl << endl;
    cout << "int pointer" << endl;
    cout << typeid(ap).name() << endl;
    cout << typeid(a1p).name() << endl << endl;
    cout << "char" << endl;
    cout << typeid(b).name() << endl; 
    cout << typeid(b1).name() << endl; 
    cout << typeid(b2).name() << endl; 
    cout << typeid(b3).name() << endl << endl;
    cout << "float" << endl; 
    cout << typeid(e).name() << endl;
    cout << typeid(f).name() << endl;
    cout << typeid(f2).name() << endl << endl;
    cout << "string" << endl;
    cout << typeid(c).name() << endl; 
    cout << typeid(xxx).name() << endl << endl; 
    cout << "other class" << endl;
    cout << typeid(xyz).name() << endl; 
    cout << typeid(ayza).name() << endl << endl;
    cout << "variable in side of class" << endl; 
    cout << typeid(xyz.a).name() << endl; 
    cout << typeid(ayza.a).name() << endl; 
    cout << typeid(ayza.output()).name() << endl;


    string str = typeid(ayza).name();
    cout << typeid(str).name() << endl;

    return 0;
}