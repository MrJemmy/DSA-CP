#include <iostream>  
using namespace std;
  
float division(int x, int y){  
   if( y == 0 ) {  
        throw "Attempted to divide by zero!";  
   }  
   return ((float)x/(float)y);  
}
  
int main () {  
   try {  
        int i = 25;  
        int j = 0;  
        float k = 0; 
        k = division(i, j);
        cout << k << endl;  
   }catch (const char* e) {  
        cerr << e << endl;  
   }catch (const exception& e){
        cerr << "Exception caught: " << e.what() << endl;  // go in deep if posible
   }
   return 0;  
}  