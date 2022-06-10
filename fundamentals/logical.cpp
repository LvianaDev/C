#include <iostream>
using namespace std;

int main() {
    double finalGrade;
    cout << "Enter the final grade: ";
    cin >> finalGrade;

    bool goodBehavior;
    cout << "Is he/she well-behaved? ";
    cin >> goodBehavior;

    bool goodStudent = finalGrade >= 9 && goodBehavior;
    bool averageStudent = (finalGrade >= 9) ^ goodBehavior;
    bool badStudent = finalGrade <= 3 && !goodBehavior;
    bool loanCanceled = finalGrade <= 3 || !goodBehavior;

    cout << "Good Student? " << goodStudent << endl;
    cout << "Average Student? " << averageStudent << endl;
    cout << "Bad Student? " << badStudent << endl;
    cout << "Will the loan be cancelled? " << loanCanceled << endl;

    return 0;
}