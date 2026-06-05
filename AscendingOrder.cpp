#include <iostream>
#include <vector>
using namespace std;
int main() {
    int num1 = 1;
    int num2 = 0;
    int number = 5;
    for(int i = 0;i < number;i++){
        if(i % 2 == 0){
            num1 += num2;
            cout << num1 << endl;
        }else{
            num2 += num1;
            cout << num2 << endl;
        }
    }

    return 0;
}
