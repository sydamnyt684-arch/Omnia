#include <iostream>
using namespace std;

int main()
{
    float degree1, degree2, degree3, average;

    cout << "Enter first degree: ";
    cin >> degree1;

    cout << "Enter second degree: ";
    cin >> degree2;

    cout << "Enter third degree: ";
    cin >> degree3;

    average = (degree1 + degree2 + degree3) / 3;

    cout << "Student average = " << average << endl;

    return 0;
}