#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU");
    int number, twoNFactorial;
    int sign = 0;

    double epsilon, x, strictSum, argumentX, sum, summand, difference;

    cout << "Enter epsilon" << endl;
    cin >> epsilon;

    cout << "Enter X" << endl;
    cin >> x;

    cout << "Epsilon is: " << epsilon << endl;
    cout << "X is: " << x << endl;

    if(epsilon <= 0)
    {
        cout << "Epsilon is incorrect" << endl;
        return 0;
    }
    else
    {
        number = 0;
        strictSum = cos(x);
        sign += 1;
        twoNFactorial = 1;
        argumentX = 1;
        sum = 0;
        difference = fabs(strictSum - sum);
        while(difference > epsilon)
        {
            number += 1;
            // Формирование слагаемого
            sign -= sign;
            argumentX = argumentX * x * x;
            twoNFactorial = twoNFactorial * (2 * number - 1) * (2 * number);
            summand = sign * argumentX / twoNFactorial;
            // добавить слагаемое к сумме
            sum += summand;
            difference = fabs(strictSum - sum);
        }

        cout << "Number is: " << number << endl;
        cout << "strictSum is: " << strictSum << endl;
        cout << "Sum is: " << sum << endl;
        cout << "Epsilon is: " << epsilon << endl;
        cout << "Difference is: " << difference << endl;
    }

    return 0;
}
