#include<iostream>
using namespace std;

// with single argument 
template <class T>  
void bubbleSort_1(T a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (a[j] < a[j - 1])
                swap(a[j], a[j - 1]);
}

// with multipul argument
template <class T, int U>  
void bubbleSort_2(T a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (a[j] < a[j - 1])
                swap(a[j], a[j - 1]);
}


int main(){
    
    int a[5] = {50, 10, 40, 20, 30};
    int n = sizeof(a) / sizeof(a[0]);
    bubbleSort_1<int>(a,n);
    for(int i = 0; i<n ; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
