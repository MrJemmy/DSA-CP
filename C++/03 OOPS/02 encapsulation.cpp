#include <iostream>
using namespace std;

class Student{

    private: // No one can access private variable of class directly except class it self
        int id;

    protected: // except child class and class it self no one can access data directly
        string name;

    public: // every one can access variable directly 

        // but using public function geter and seter other clas can access priavate variable
        void setId(int id){
            this->id = id;
        }
        void setName(string name){
            this->name = name;
        }
        int getId(){
            return id;
        }
        string getName(){
            return name;
        }

        // we can make displayData Function also to print value of al variable 
};

int main(){

    Student jaimin;

    // set Data
    jaimin.setId(14);
    jaimin.setName("jaimin");
    
    // get data
    cout << jaimin.getId() << endl;
    cout << jaimin.getName() << endl;

    return 0;
}


// -------------------------------------------------