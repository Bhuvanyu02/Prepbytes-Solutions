#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;cin>>t;
    while(t--){
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
      int min=arr[0];
      int c=0;
      for(int i=1;i<n;i++){
        if(arr[i]<min){
          min=arr[i];
          c=i;
        }
      }
      cout<<c<<endl;
    }
    
    return 0;
  }
