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
      int count=-1;
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
      for(int i=0;i<n;i++){
       if(arr[i]==1){
         count=i;
       }
      }
      cout<<count<<endl;
    }
    
    return 0;
  }
