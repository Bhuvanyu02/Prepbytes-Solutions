#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    long long n;
    long long k;
    cin>>n>>k;
    long long arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    
    for(int i=0;i<=n-k;i++){
      int max=INT_MIN;
      for(int j=i;j<i+k;j++){
        if(arr[j]>max){
          max=arr[j];
        }
      }
      cout<<max<<" ";
    }
    cout<<endl;
    
    return 0;
  }
