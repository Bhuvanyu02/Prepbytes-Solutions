#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
      int t;
      cin>>t;
      while(t--){
        int n;
        cin>>n;
        int count=-1;
        long long arr[n];
        for(int i=0;i<n;i++){
          cin>>arr[i];
        }
        for(int i=0;i<n;i++){
          if(arr[i]==1){
            if(arr[i-1]==1){
              break;
            }
            else{
            count=i;
            }
          }
        }
      cout<<count<<endl;    
      
        
      }
    
    return 0;
  }
