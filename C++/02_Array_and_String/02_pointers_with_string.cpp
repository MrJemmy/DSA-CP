#include <iostream>
using namespace std;

void string_in_char(){
    // warning given by compiler: ISO C++ forbids converting a string constant to ‘char*’
    char *name = "jaimin";
    string *name2 = new string("jaimin"); // how it should be done
    cout << name << endl;
    cout << name2 << endl;
}

void array_of_string(){
    // warning given by compiler: ISO C++ forbids converting a string constant to ‘char*’
    int MAX = 4;
    char *names[MAX] = { "jaimin", "gunjan", "shivam", "raj" };  // only static memory is used.
    // string *names2[MAX] = { "jaimin", "gunjan", "shivam", "raj" };
    for (int i = 0; i < MAX; i++) {
      cout << "Value of names[" << i << "] = ";
      cout << (names + i); 
      cout << ", Value inside array = ";
      cout << *(names + i) << endl;
   }
}

int main(){
    array_of_string();
    string_in_char();
    
    return 0;
}