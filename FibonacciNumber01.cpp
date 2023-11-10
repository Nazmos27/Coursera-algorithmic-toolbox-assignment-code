#include <iostream>

using namespace std;

int main(){
  int n;
  cin >> n;

  if(n < 0){
  cout << "invalid input" << endl;

  }
  long long fibonacciNumbers[n+2];
  fibonacciNumbers[0] = 0;
  fibonacciNumbers[1] = 1;

  if(n >= 2){

    for(int i = 2; i<=n; ++i){
      fibonacciNumbers[i] = fibonacciNumbers[i-1] +  fibonacciNumbers[i-2];
    }
  }

  cout << fibonacciNumbers[n]%10;

  return 0;
}
