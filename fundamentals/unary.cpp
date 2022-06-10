#include <cstdio>
using namespace std;

int main() {
    int x = 2;
    int y = 1;

    x++; //postflix
    ++y; //prefix

    printf("%d %d", x, y);
    --x; //postfix
    y--; //prefix
    printf("%d $d\n", x, y);

    // bad code!
    printf("%d ", x-- == ++y);
    return 0;
}