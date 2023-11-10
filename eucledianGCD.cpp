#include <iostream>

using std::cin;
using std::cout;

long long eucledianGCD(int a, int b){
  if(b = 0)
    return a;
  else
     return a=a%b;
}

int main(){
  int n;
  int m;
  cin >> n;
  cin >> m;
  long long result = eucledianGCD(n,m);
  cout << result;
  return 0;
}
