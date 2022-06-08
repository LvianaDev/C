#include <iostream>

int main(){

    bool isAdmin = true; // true, false, 0 or 1
    cout << isAdmin << endl;

    // char symbol = '#';
    char symbol('#');
    cout << symbol << endl
    
    // datatype modifiers
    // signed unsigned long short
    unsigned short int age = 31;
    cout << age << endl;

    float pi = 3.14; // 32 bits - single precision flaoting point type
    const double PI = 3.1415792;

    //datatype modifiers
    // signed unsigned long short
    short int n1= 1;
    long int n2 = 1;
    unsigned int n3 = 1;
    long long int n4 = 1;
    cout << n1 + n2 + n3 + n4 << endl

    cout << sizeof(char) << " byte" << endl;
    cout << sizeof(char16_t) << " byte" << endl;
    cout << sizeof(char32_t) << " byte" << endl;
    cout << sizeof(int) << " bytes" << endl;
    cout << sizeof(long int) << " bytes" << endl;
    cout << sizeof(long long int) << " bytes" << endl;
    cout << sizeof(float) << " bytes" << endl;
    cout << sizeof(double) << " byte" << endl;

    return 0;
}