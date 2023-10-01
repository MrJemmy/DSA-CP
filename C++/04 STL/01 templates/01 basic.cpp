#include<iostream>
using namespace std;

// ==== templates ====
// pass data type as a parameter so that we don’t need to write the same code for different data types
// so templates help to implement generics code 

// diff <typename T> vs <class T> in 02 using function
// when we are using classes, LinkedList, BinaryTree, Stack, Queue, Array (independent of the datatype) then use "class" other wise "typename"

template <typename T> 
T myMax(T x, T y){
    return (x > y) ? x : y;
}

int main(){
    // normal function with Templates
    cout << myMax<string>("jaimin", "gunjan") << endl;

    return 0;
}

//  NOTE :- between <params in this brecket> and (params passed in this brecket) have no reletion 



// Advance Concept (Not Done)
    // 1. Template Metaprogramming : calculation done at compile time
    // 2. Templates and Static variables 
    // 3. Templates Specialization : getting a special behavior for a particular data type