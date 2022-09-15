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
      long long maxsum=0;
      for(int i=0;i<n;i++){
        long long sum=0;
        for(int j=i;j<n;j++){
          sum+=arr[j];
          if(sum>maxsum){
            maxsum=sum;
          }
        }
      }
      cout<<maxsum<<endl;
      
    }
      
    
    return 0;
  }
