#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      int n;
      int x;
      int ans=-1;
      cin>>n>>x;
      int arr[n];
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
      for(int i=0;i<n;i++){
        if(arr[i]<=x){
          ans++;
        }
      }
      cout<<ans<<endl;
    }
    
    return 0;
  }
