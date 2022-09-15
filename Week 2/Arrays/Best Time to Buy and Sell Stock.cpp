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
      int max=0;
      for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j] && (arr[j]-arr[i])>max){
              max=arr[j]-arr[i];
            }
        }
      }
      cout<<max<<endl;
    }
    
    return 0;
  }
