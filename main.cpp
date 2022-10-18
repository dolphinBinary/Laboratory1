#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double PI = acos(-1);
    setlocale(LC_ALL, "ru_RU");
    int number, twoN;

    double sign, epsilon, x, strictSum, sum, summand, difference;
    sign = 0;

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
        strictSum = (PI * PI * PI) / 32;
        sign = -1;
        sum = 0;
        difference = fabs(strictSum - sum);
        while(difference > epsilon)
        {
            number += 1;
            // Формирование слагаемого
            sign = -sign;
            twoN = (2 * number - 1);
            summand = sign / twoN / twoN / twoN;
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
