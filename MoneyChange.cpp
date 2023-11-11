#include <bits/stdc++.h>

using namespace std;

int main(){
  int money;
  cin >> money;
  int first = money/10;
  money = money - (first*10);
  int sec = money/5;
  int third = money%5;

  int result = first + sec + third;
  cout << result ;
  return 0;
}
