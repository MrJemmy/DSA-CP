#include <iostream>
using namespace std;

// abstraction :- Implementation hiding [only required this will be shown other are hiden from user]
// abstract class (Interfaces) : class which containt " a pure virtual function "

class Shape{    
    public:   
        virtual void draw()=0;    
};    

class Circle : Shape{    
    private:
        int private_var = 10;
    public:  
        void draw(){    
            // from Shape we must have to overrite this method.
            cout << "drawing circle..." << endl;    
        }
        // encapsulation is closely related concept to abstaction. 
        int get_var(){
            return private_var;
        }
        void set_var(int var){
            this->private_var = var;
        }   
};

int main( ) { 
    // Shape shp; :- we can not create object of abstract class
    Circle cir;  
    cir.draw();
    cout << cir.get_var() << endl;
    cir.set_var(11);
    cout << cir.get_var() << endl;
    return 0;  
}  