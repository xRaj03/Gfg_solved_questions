#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0;
    

    cout << "Enter an integer: ";
    cin >> num;
    int temp = num;

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    std::cout << "Reversed number: " << reversed << temp <<endl;

    return 0;
}
