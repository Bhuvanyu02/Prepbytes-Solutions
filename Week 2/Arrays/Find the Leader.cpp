#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
      int m=0;
      for(int i=n-1;i>=0;i--){
      if(arr[i]>=m){
        cout<<arr[i]<<" ";
        m=arr[i];
      }
        
      }
     cout<<endl;
    }
    
    return 0;
  }
