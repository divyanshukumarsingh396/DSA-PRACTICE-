#include <iostream>
using namespace std;

long long factorial(int n) {
    long long fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

bool isStrong(int num) {
    int temp = num;
    long long sum = 0;

    while(temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    return (sum == num);
}

int main() {
    int number;
    cout << "Enter number: ";
    cin >> number;

    if(isStrong(number))
        cout << "Strong Number";
    else
        cout << "Not Strong Number";

    return 0;
}
