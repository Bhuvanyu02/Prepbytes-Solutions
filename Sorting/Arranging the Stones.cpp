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
      for(int i=0;i<n-1;i++){
        for(int j=1+i;j<n;j++){
          if(arr[j]<arr[i]){
            int t=arr[j];
            arr[j]=arr[i];
            arr[i]=t;
          }
        }
      }
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
      }
      cout<<endl;
    }
    
    return 0;
  }
