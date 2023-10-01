#include<iostream>
using namespace std;

// type1: compile time polymorphism : function overloading and operator ovrloading 
// type2: run time polymorphism     : function overriding

class A{
    public:
        // overrite : with just changing return type it will overrite not workd wehave to change in input Args
        void fun(){
            cout << "Not Params class A" << endl;
        }
        string fun(string str){
            cout << str << endl;
            return str;
        }
        // override
        void fun_test(){
            cout << "Not Params class A" << endl;
        }

};

class B : public A{
    public: 
        // override : use to chagne functionlity of function we it change based on realtie entity
        void fun_test(){
            cout << "Not Params class B" << endl;
        }

        // operator overloading 
        void operator+ (B obj){
            // do operation using this-> pointer and passed object to overrite functionaity we want
            cout << "we can change functionality" << endl;
        }
        void operator() (B obj){
            cout << "Must have pair in overriting breckets" << endl;
        }
};


int main(){

    B obj_b;
    obj_b.fun_test();       // class B's function will override function of class A
    obj_b.A::fun_test();   

    // operator overloading
    obj_b + obj_b;
    obj_b(obj_b);
    return 0;
}



//  NOTE : we can not overloading '::', '*', '.', '?:'  other then this four we can do overloading for all other symbols 