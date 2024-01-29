// g++ "hello world.cpp" -o "hello world"
// .\hello world.exe

#include<iostream>
using namespace std;
int main(){
    
    int c;
    c = 5;
    cout << c << endl;
    cout << c++ << endl;
    cout << c << endl << endl;

    int counter;
    counter = 1;

    while (counter <= 10){
        cout << counter << endl;
        // counter++;
        ++counter;
    }

    return 0;

}