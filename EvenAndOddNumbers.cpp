#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector <int> numbers = {67, 92, 55, 21};
    int even = 0;
    int odd = 0;
    for(int i : numbers){
        if(i % 2 == 0){
            even += 1;
        }else{
            odd += 1;
        }
    }
    cout << "even numbers: " << even << endl;
    cout << "odd numbers: " << odd;
    return 0;
}
