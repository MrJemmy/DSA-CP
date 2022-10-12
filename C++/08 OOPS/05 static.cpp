#include<iostream>
using namespace std;


class Test{
    // we can only access static variables 
    // to Access other variables we need to pass them throw params
    public:
        static int num;

        static void set_num(int number){
            num = number;
            cout << "Done" << endl;
        }
};

// if we have static variables then we need to assigne memory 1st
int Test::num = 0;  

int main(){

    Test::set_num(1);
    cout << Test::num << endl;

    return 0;
}