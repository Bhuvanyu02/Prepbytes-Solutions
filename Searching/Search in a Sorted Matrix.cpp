#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      int n;
      int m;
      cin>>n>>m;
      long long arr[n][m];
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          cin>>arr[i][j];
        }
      }
      long long ans;
      cin>>ans;
      bool check=false;
      int ans1=-1;
      int ans2=-1;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if(arr[i][j]==ans){
            ans1=i+1;
            ans2=j+1;
            check=true;
          }
          if(check==true){
            break;
          }
        }
        if(check==true){
            break;
          }
      }
      cout<<ans1<<" "<<ans2<<endl;
    }
    
    return 0;
  }
