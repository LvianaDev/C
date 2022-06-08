#include <iostream>
using namespace std;

int main() {
    const double PI = 3.1415; // variable const = value not modification
    double radius;

    cout << "Enter radius: ";
    cin >> radius;

    cout << PI * radius * radius;

    return 0;
}