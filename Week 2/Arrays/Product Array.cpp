#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
   int t;
   cin>>t;
   while(t--){
     int n;
     cin>>n;
     long long arr[n];
     for(int i=0;i<n;i++){
       cin>>arr[i];
     }
     long long p=1;
     for(int i=0;i<n;i++){
       p*=arr[i];
     }
     for(int i=0;i<n;i++){
       arr[i]=(p/arr[i]);
     }
     for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
     }
     cout<<endl;
   }
    
    return 0;
  }
