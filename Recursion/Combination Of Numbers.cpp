#include <bits/stdc++.h>
  using namespace std;
  void func(int *arr,int n,int k,int i,string res){
    if(k==0){
      cout<<res<<endl;
    }
      for(int j=i;j<n;j++){
          func(arr,n,k-1,j+1,res+to_string(arr[j])+" ");
      }
    }
  int main()
  {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    int k;
    cin>>k;
    func(arr,n,k,0,"");
    return 0;
  }
