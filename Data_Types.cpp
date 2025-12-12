#include <iostream>
using namespace std;
int main() {

    int a = 10;
    float b = 15.4;
    double c = 20.5873;

    char d = 'A'; // Character data type holds a single character.

    bool e = true; // Boolean data type can be either true or false.

    unsigned int f = 3000000000; /* Large unsigned integer.
    This data type only contains zero and positive numbers.*/

    long long g = 9223372036854775807; // Large long long integer

    const double PI = 3.141592653589793; /* This value can't be changed.
    If you try to change it, you'll get an error.*/

    auto sum = a + b + c; /* 'auto' will find the appropriate type.
    If you want to change the value for sum, you have to type it with 'auto'*/

    cout << "Integer: " << a << endl;
    cout << "Float: " << b << endl;
    cout << "Double: " << c << endl;
    
    cout << "Character: " << d << endl; /*If we want the ASCII value for the character,
    we have to type like this - (int)d .
    Then it will give A ASCII value 65.*/

    cout << "Boolean: " << e << endl;
    cout << "Unsigned Integer: " << f << endl;
    cout << "Long Long Integer: " << g << endl;
    cout << "Constant PI: " << PI << endl;
    cout << "Sum (auto type): " << sum << endl;

    return 0;
}