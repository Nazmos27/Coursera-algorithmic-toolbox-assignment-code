#include <bits/stdc++.h>
using namespace std;

int main(){
  int a[8]={5,7,3,5,1,10,14,6};
  int minIndex = 0;
  for(int i = 0; i< 7; ++i){
    minIndex = i;
    for(int x = i+1; x<8;++x){
      if(a[x]<a[minIndex]){
        minIndex = x;
      }
    }
    if(minIndex!=i){
      swap(a[minIndex],a[i]);
    }
  }




  for(int j = 0;j<8;++j){
    cout <<endl<< a[j] << ",";
  }

  return 0;
}
