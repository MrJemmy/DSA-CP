#include <iostream>
#include <limits>
using namespace std;

int main(){
    typedef long double new_double;

    cout << "SIZE : "<< sizeof(new_double) << endl;
    std::cout << "Long Double Min " << std::numeric_limits<new_double>::min() << endl;
    std::cout << "Long Double Max " << std::numeric_limits<new_double>::max() << endl;

    typedef enum color { red, green, blue } custom_enum;
    custom_enum a = blue;
    custom_enum b = green;
    cout<< a << endl;
    cout<< (b==1) << endl;
}