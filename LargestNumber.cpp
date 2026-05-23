#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector <int> numbers = {67, 92, 55, 21};
    sort(numbers.begin(), numbers.end());
    cout << numbers[numbers.size() - 1];
    return 0;
}
