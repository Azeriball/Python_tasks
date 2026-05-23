#include <iostream>
using namespace std;
int main() {
    string word = "Six Seven";
    string reversed;
    for(int i = word.length() - 1 ; i > -1; i--){
        reversed += word[i];
    }
    cout << reversed;
}
