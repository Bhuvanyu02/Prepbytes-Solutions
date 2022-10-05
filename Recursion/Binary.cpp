#include <bits/stdc++.h>
  using namespace std;
  void rec(int n,int k,int a[]){
    if(k==n){
      for(int i=0;i<n;i++){
        cout<<a[i];
      }
    cout<<endl;
    return;
    }
  
  if(a[k-1]==0){
    a[k]=0;
    rec(n,k+1,a);
    a[k]=1;
    rec(n,k+1,a);
  }
  else{
    a[k]=0;
    rec(n,k+1,a);
  }
  
  }
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int a[n];
      a[0]=0;
      rec(n,1,a);
      a[0]=1;
      rec(n,1,a);
    }
    
    return 0;
  }
