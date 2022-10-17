#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
   int t;
   cin>>t;
   while(t--){
     long long n;
     cin>>n;
     long long arr[n];
     for(int i=0;i<n;i++){
       cin>>arr[i];
     }
    sort(arr,arr+n);
    int i=0;int j=n-1;
    while(j-i>1){
      j--;i++;
    }
    cout<<arr[i]<<endl;
   }
    
    return 0;
  }
