#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector <int> numbers = {1, 2, 3, 4, 5, 6, 7, 67, 92, 55};
    int x = 0;
    for(int i = 0;i < numbers.size(); i++){
        x += numbers[i];
    }
    cout << x;
    return 0;
}
