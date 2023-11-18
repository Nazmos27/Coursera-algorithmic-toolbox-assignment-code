#include <bits/stdc++.h>
using namespace std;

int main(){
  int a[8]={5,7,3,5,1,10,14,6};
  int minValue = a[0];
  for (int i = 0; i< 8; ++i ){
    if(minValue>a[i]){
      minValue = a[i];
    }
  }
  for(int j = 0;j<8;++j){
    cout << a[j] << ",";
  }
  cout<<endl <<"min value is: "<< minValue;
}
