#include <bits/stdc++.h>
  using namespace std;
  long long ans;
  void fact(int n){
    if(n==0||n==1){
      cout<<ans<<endl;
    }
    else{
      ans*=n;
      fact(n-1);
    }
  }
  int main()
  {
   int t;
   cin>>t;
   while(t--){
     int n;
     cin>>n;
     ans=1;
     fact(n);
   }
    
    return 0;
  }
