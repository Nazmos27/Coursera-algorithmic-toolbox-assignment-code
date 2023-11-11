#include <bits/stdc++.h>

using namespace std;

int main(){
  long long a;
  long long b;
  cin >> a;
  cin >> b;
  long long product = a*b;
  while(b!=0){
    long long temp = b;
    b = a%b;
    a = temp;
  }
  long long result = product/a;
  cout << result;

  return 0;
}
