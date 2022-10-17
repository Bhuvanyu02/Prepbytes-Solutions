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
      int sum1=0;
      int sum2=0;
      for(int i=0;i<n;i++){
        if(i%2!=0){
          sum1+=arr[i];
        }
        else{
          sum2+=arr[i];
        }
      }
      if(sum1>sum2){
        cout<<sum1<<endl;
      }
      else{
        cout<<sum2<<endl;
      }
      
    }
    
    return 0;
  }
