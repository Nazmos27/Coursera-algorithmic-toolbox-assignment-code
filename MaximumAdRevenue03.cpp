#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  int arr1[n];
  int arr2[n];
  for(int a = 0; a < n; ++a){
      cin >> arr1[a];
  }
  for(int b = 0; b < n; ++b){
      cin >> arr2[b];
  }

  sort(arr1,arr1+n, greater<int>());
  //int arr2[n]= {-2,4,1};
  sort(arr2,arr2+n, greater<int>());
  int sum = 0;
  /*for(int i = 0; i<n;++i){
    cout << arr1[i] <<",";
  }
  for(int i = 0; i<n;++i){
    cout << arr2[i] << ",";
  }*/
  for(int i = 0; i<n;++i){

    if((arr1[i]>0 && arr2[i]>0) || (arr1[i]<0 && arr2[i]<0)){
          sum = sum+(arr1[i]*arr2[i]);

    }else if((arr1[i]<0 && arr2[i]>0) || (arr1[i]>0 && arr2[i]<0)){
      sum = sum + (arr1[i]*arr2[n-1-i]);
    }
  }
  cout << sum << endl;
  return 0;
}
