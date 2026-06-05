#include <iostream>
#include <vector>
using namespace std;
int main(){
  int number = 67;
  int x = 0;
  for(int i = 1;i < number; i++){
    if(number % i == 0){
      x += 1;
    }
  }
  if(x >= 2){
    cout << "false";
  }else{
    cout << "true";
  }
  return 0;
}
