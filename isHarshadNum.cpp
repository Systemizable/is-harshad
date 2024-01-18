#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool isHarshad(int num) {
    int sum = 0;
    int temp = num;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;

    }

    return(num%sum==0);
}

void harshadNumbers(int n) {
    if (n <= 0) {
        cout << "Invalid input. N must be a positive integer." << endl;
        return;
    }
    int count = 0;
    int num = 20;
    while (count < n) {
        if (isHarshad(num)) {
            cout << num << " is a Harshad Number"<<endl;
            count++;
        }
        num++;
    }
    cout << endl;
}

int main() {
    int x;
    cout<<"Please input a number:"<<endl;
    cin>>x;
    cout<<"The sum of the digits of "<<x<<" is: "<< sumOfDigits(x)<<endl;

    if (isHarshad(x)) {
        cout << x << " is a Harshad Number!" << endl;
    } else {
        cout << x << " is not a Harshad Number!" << endl;
    }
    int h;
    cout<<"Enter how many Harshad Numbers to find(a positive n):"<<endl;
    cin>>h;
    harshadNumbers(h);
    return 0;
}