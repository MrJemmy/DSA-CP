#include <iostream>
#include <typeinfo>
using namespace std;

class Test{
    public:
        string name1;
        string name2;
};
  
int main()
{

    Test test;
    test.name1 = "jaimin";
    test.name2 = "gunjan"; 
    
    cout << test.name1 << endl;
    cout << typeid(test.name1).name() << endl; // TODO : how to find type of variable in c++



    return 0;
}