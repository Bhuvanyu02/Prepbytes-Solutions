#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int n;
    cin>>n;
    int k;
    cin>>k;
    int ans=0;
    int t=240-k;
    for(int i=1;i<=n;i++){
      if(t>i*5){
        ans++;
      }
      t-=5*(i);
    }
    cout<<ans<<endl;
    
    return 0;
  }
