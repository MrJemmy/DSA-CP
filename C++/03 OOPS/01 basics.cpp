#include <iostream>
using namespace std;

class Test{
    public:
        Test *addOfThis(){
            return this;
        }
};

int main(){
    // Address of "this" and "Object of Class" where "this" is pointer of class

    Test *jaimin = new Test();

    cout << "Address of Obj : "  << jaimin << endl;
    cout << "Address of this : " << jaimin->addOfThis() << endl;

    return 0;
}