#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int grade1, grade2, grade3;
    double weight1, weight2, weight3;

    // input (interactive)
    cout << "enter grade 1 and its weight: ";
    cin >> grade1 >> weight1;
    cout << "enter grade 2 and its weight: ";
    cin >> grade2 >> weight2;
    cout << "enter grade 3 and its weight: ";
    cin >> grade3 >> weight3;

    // calculation
    double weightedAvg = grade1 * weight1 + grade2 * weight2 + grade3 * weight3;

    cout << fixed << setprecision(2);

    // print input data
    cout << "\n--- Input Data ---\n";
    cout << "Grade 1: " << grade1 << ",  weight: " << weight1 << endl;
    cout << "Grade 2: " << grade2 << ",  weight: " << weight2 << endl;
    cout << "Grade 3: " << grade3 << ",  weight: " << weight3 << endl;

    // result
    cout << "\nresult:";
    cout << "avg grade: " << weightedAvg << endl;

    return 0;
}
