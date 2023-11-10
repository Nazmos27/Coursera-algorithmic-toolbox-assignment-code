#include <iostream>

using namespace std;

int main(){
  long long n;
  cin >> n;
  if(n<0){
    cout << "enter any positive number"  << endl;
    return 0;
  }
  long long fiboRemainder[62];
  long long fibonacci[62];
  fibonacci[0] = 0;
  fibonacci[1] = 1;

  if(n>=2){
    for(long i = 2; i<61;++i){
      fibonacci[i] = (fibonacci[i-1] + fibonacci[i-2]);

    }
  }

  for(int j = 0; j<62;++j){
    fiboRemainder[j] = fibonacci[j] % 10;
    //cout << fiboRemainder[j];
  }

  cout << fiboRemainder[(n%60)];
}
