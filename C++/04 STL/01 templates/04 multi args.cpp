#include <iostream>
#include <typeinfo>
using namespace std;


template <typename T, typename U = char>
class Pair{
    public:
        T a;
        U b;
        Pair(T a1, U b1){
            cout << "cunstructure called" << endl;
            a = a1;
            b = b1;
        }
};

template <typename T, int max = 0>
void passing_const_in_temp(){
    cout << "const can be access in function by passing throw template" << endl;
    cout << max << endl;
}

int main(){

    Pair<int, int> p(5, 5);
    cout << p.a << endl;
    cout << p.b << endl;

    Pair<int> p2(5, 'j');
    cout << p2.a << endl;
    cout << p2.b << endl;

    const int a = 2000;
    // we can pass only const values
    passing_const_in_temp<int>();
    passing_const_in_temp<int, 1000>();
    passing_const_in_temp<int, a>();

    return 0;
}