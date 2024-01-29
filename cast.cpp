// g++ "hello world.cpp" -o "hello world"
// .\hello world.exe

#include<iostream>
using namespace std;
int main()
{
    char a = 'a';
    short b = 5;
    int c = 156;
    long d = 5;
    float e = 9.8;
    double f = 12.5;
    bool g = true;

    cout << sizeof(a) << endl;  // 1
    cout << sizeof(b) << endl;  // 2
    cout << sizeof(c) << endl;  // 4
    cout << sizeof(d) << endl;  // 4
    cout << sizeof(e) << endl;  // 4
    cout << sizeof(f) << endl;  // 8
    cout << sizeof(g) << endl;  // 1

    // implicit type conversion

    cout << "Converted to integer: " << (b / 1) << endl;
    // 0 => False, other integer => True
    if (b) {
        cout << "Integer converted to boolean!" << endl;
    }

    // 'a' => ASCII 97
    // 97/5 = 19 (integer division)
    cout << "Character converted to integer: " << (a / b) << endl; 
    cout << sizeof(a / b) << endl;

    // short converted to long, and then multiply
    cout << "Integer converted to integer: " << (b * d) << endl;
    cout << sizeof(b * d) << endl;

    // integer converted to float, and then multiply
    cout << "Integer converted to float: " << (c / e) << endl;
    cout << sizeof(c / e) << endl;

    // double converted to integer, 12.5 => 12
    cout << "Float converted to integer: " << (c = f) << endl;
    cout << sizeof(c) << endl;

    cout << "------------" << endl;



    // explicit type conversion
    // dynamic_cast, const_cast, static_cast, reinterpret_cast

    char h = 'a';
    int i = 97;
     
    cout << h << endl;
    cout << i << endl; 
    cout << static_cast<char>(i) << endl;
    cout << static_cast<int>(h) << endl;

    cout << "------------" << endl;

    double x, y;

    x = a / b;
    cout << "char a / short b: " << x << endl;  // 19
    cout << sizeof(x) << endl;

    y = (double) a / b;
    cout << "(double) char a / short b: " << y << endl;  // 19.4
    cout << sizeof(y) << endl;

    return 0;
}