#include <iostream>
using namespace std;


class Student{
    public:
        int id;
        string name;
        
        // Default Constructure
        Student(){ 
            cout << "Default Constructure Called" << endl;
        }

        // Parameterized Constructure
        Student(int id, string name){
            cout << "Parameterized Constructure Called" << endl;
            this->id = id;
            this->name = name;
        }

        // Copy Constructure
        Student(Student *obj){
            // default copy constructure do shallow copy of object
            // custome copy constructure do deeo copy of object
            cout << "Copy Constructure Called" << endl;
            this->id = obj->id;
            this->name = obj->name;
        }

        // Distructure
        ~Student(){
            // For Dynamic mamory allocation, we should call using "delete"
            cout << "Distructure is called " << endl;
        }
};

void static_memory_obj(){
    // autometic constructure is called

    Student obj1;                       // using default constucture 
    Student obj2(14, "jaimin");         // using parameterized constructure
    Student obj3(obj2);                 // using Copy constructure
        //  need to pass address of object when copy constructure accepting reference of object 

    cout << obj3.name << endl;
    obj3.name = "Gunjan";
    cout << obj2.name << endl;
}

void dynamic_memory_obj(){
    // manualy constructure need's to call
    
    Student *obj1 = new Student(26, "gunjan");   // using parameterized constructure
    Student *obj2 = new Student(obj1);    // using Copy constructure

    cout << obj1->name << endl;
    obj1->name = "Gunjan";
    cout << obj2->name << endl;

    delete obj1;
    delete obj2;
}

int main(){

    cout << "========== calling static_memory_obj  ==========" << endl;
    static_memory_obj();
    cout << "========== calling dynamic_memory_obj ==========" << endl;
    dynamic_memory_obj();
    

    return 0;
    
}


// shallow copy :- both object referring to same memory   
// deeo copy :- it makes proper copy     