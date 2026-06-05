#include <iostream>
#include <vector>
using namespace std;
int main() {
    int task;
    int num1, num2;
    cout << "Enter a function: ";
    cin >> task;
    cout << "Enter first number: ";
    cin >> num1;                  
    cout << "Enter second number: ";
    cin >> num2;
    switch (task) {
        case 1:
            cout << num1 + num2;
            break;
        case 2:
            cout << num1 - num2;
            break;
        case 3:
            cout << num1 * num2;
            break;
        case 4:
            cout << num1 / num2;
            break;
    }
    return 0;
}
