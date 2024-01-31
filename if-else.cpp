// g++ "hello world.cpp" -o "hello world"
// .\hello world.exe

#include<iostream>
using namespace std;
int main(){
    
    int x, y;
    cout << "Input x: ";
    cin >> x;
    cout << "Input y: ";
    cin >> y;

    if (x > y){
        cout << "x is big." << endl;
    } else if (x == y){
        cout << "x is equal to y." << endl;
    } else if (x < y){
        cout << "y is big." << endl;
    }
}