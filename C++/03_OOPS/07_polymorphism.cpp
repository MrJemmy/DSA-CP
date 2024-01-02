#include<iostream>
using namespace std;

// type1: compile time polymorphism : function overloading and operator oveloading 
// type2: run time polymorphism     : function overriding, variable overriding (In Diff Class)

class A{
    public:

        string var = "A"; // variable overriding

        // overrite : with just changing return type it will overrite not workd we have to change in input Args
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
        string var = "B"; //variable overriding
        int num = 0; 

        // override : use to chagne functionlity of function we it change based on realtie entity
        void fun_test(){
            cout << "Not Params class B" << endl;
        }
        
        void operator++(){  // for pre-increment
          num = num+2;     
        }    
        void operator++(int){   // for post-increment
          num = num+2;     
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
    cout << obj_b.num << endl;
    ++obj_b;
    cout << obj_b.num << endl;
    obj_b++;
    cout << obj_b.num << endl;

    cout << obj_b.var << endl;
    cout << obj_b.A::var << endl;

    obj_b.fun_test();       // class B's function will override function of class A
    obj_b.A::fun_test();    // This way still we can call class A function 

    // operator overloading
    obj_b + obj_b;
    obj_b(obj_b);
    return 0;
}



//  NOTE : we can not overloading '::', '*', '.', '?:'  other then this four we can do overloading for all other symbols 