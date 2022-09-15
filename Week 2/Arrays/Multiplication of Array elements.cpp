#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
   int t;cin>>t;
   while(t--){
     int n;
     cin>>n;
     int arr[n];
     long long m=1;
     for(int i=0;i<n;i++){
       cin>>arr[i];
       m*=arr[i];
     }
     cout<<m<<endl;
   }
    return 0;
  }
