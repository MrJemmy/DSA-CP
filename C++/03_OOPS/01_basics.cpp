#include <iostream>
using namespace std;

class Test{
    private:
        int test_data = 10;
    public:
        friend void printTestData(Test test);  // declaration of Friend function 

        Test *addOfThis(){
            return this;
        }

        inline bool compereTestData(int var){
            return (var>=test_data);
        }
};

void printTestData(Test test){
    // this is friend function of Test Class
    // only Test class and friend function only can access private variable on Test class
    cout << "test data : " << test.test_data << endl;
}

int main(){
    // Address of "this" and "Object of Class" where "this" is pointer of class

    Test *jaimin = new Test();

    cout << "Address of Obj : "  << jaimin << endl;
    cout << "Address of this : " << jaimin->addOfThis() << endl;

    Test gunjan;
    printTestData(gunjan);
    printTestData(*jaimin); // for pointer, we need to pass object it self, pointer also can not access private data inside friend function.
    cout << "comparition with inline funciton : " << gunjan.compereTestData(11) << endl;
    cout << "comparition with inline funciton : " << jaimin->compereTestData(9) << endl;
    return 0;
}