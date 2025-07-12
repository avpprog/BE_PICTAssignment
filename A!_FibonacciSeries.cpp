

#include <iostream>
using namespace std;

int fibonacci_itr(int n){
    if(n <= 1){
        return n;
    }
    int a = 0;
    int b = 1;
    cout <<  a << " ";
    for(int i=2; i<n; i++){
        int temp = a + b;
        a = b;
        b = temp;
        cout << a << " ";
    }
    return b;
}

int fibonacciR(int n){
    if (n <= 0){
        return 0;
    }
    if (n <=1){
        return 1;
    }
    return fibonacciR(n-1) + fibonacciR(n-2);
    
}

int main(){
    int n;

    cout<<"Enter a Number: ";
    cin>>n;

    cout << "Fibonacci Non-Recursive: "<<fibonacci_itr(n)<<endl;
    cout << "Fibonacci Recursive    : ";
    for(int i=0; i<n; i++){
        cout << fibonacciR(i) << " ";
    }
}
