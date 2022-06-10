#include <iostream>
using namespace std;

int main() {
    bool sunny = true;
    // exp(T/F) ? T : F 
    string result = sunny? ":)" : ":(";
    cout << << endl;

    double balance = 1234.56
    double value;
    cout << "Enter the value: ";
    cin >> value;   

    char creditOrDebit;
    cout << "Credit (c)/deb (d): ";
    cin >> creditOrDebit;

    cout << "Balance [Before]: " << balance << endl;
    
    balance += creditOrDebit == 'C' ? value : -value;

    cout << "Balance [After]: " << balance << endl
    return 0;
}