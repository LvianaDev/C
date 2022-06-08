#include <iostream>
using namespace std;

int main(){
    // type inference
    auto a =  1;
    auto b = 1.2;
    auto c = false;

    cout << typedid(a).name() << endl
         << typedid(b).name() << endl
         << typedid(c).name() << endl;

    return 0;
}