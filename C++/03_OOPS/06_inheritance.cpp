#include <iostream>
using namespace std;

class parent1{
    private:
    protected:
        string p1protected = "p1protected";
    public:
        string p1public = "p1public";

        void print(){
            cout << "parent1" << endl;
        }
     
};

class parent2{
    private:
    protected:
        string p2protected = "p2protected";
    public:
        string p2public = "p2public";

        void print(){
            cout << "parent2" << endl;
        }
     
};

class parent3{
    private:  
    protected:
        string p3protected = "p3protected";
    public:
        string p3public = "p3public";
          
};

class child1 : public parent1, protected parent2, private parent3{
    private:
        // parent3's protecte and public are inherited in private
    protected:
        // parent2's protecte and public are inherited in protected
        // parent1's protected is inherited in protected
    public:
        // parent1's public id inherited in public
        // object directly can access only public data of publicly inherited class

};

class child2 : public parent1, public parent2{
    private:
    protected:
    public:

};

int main(){

    // To Avoid Inheritance Ambiguit we need to use class name with scope resolution operator "className::Var/Fun"
    child1 obj;
    obj.parent1::print();
    // obj.parent2::print();  : can not access because in child1, parent2 and it's data is protected 
    obj.p1public;
    // obj.parent3::print(); : can not access because in child1, parent3 and it's data is private 

    child2 obj2; // child2 class can access because of public inheritance
    obj2.parent1::print();
    obj2.parent2::print();
    obj2.p1public;

    return 0;
}


// parent1 and parent2 -> child1 and then parent1 and child1 -> child2 it create's a problems