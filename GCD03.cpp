#include <iostream>

using namespace std;

int main(){
  long a;
  long b;
  cin >> a;
  cin >> b;

  while(b!=0){
    long temp = b;
    b = a % b;
    a = temp;
  }

  cout << a;
}
