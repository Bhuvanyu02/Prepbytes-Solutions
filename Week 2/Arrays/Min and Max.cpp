#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;cin>>t;
    while(t--){
      int n;
      cin>>n;
      int arr[n];
      int min;
      int max;
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
      min=max=arr[0];
      for(int i=1;i<n;i++){
        if(arr[i]<min){
          min=arr[i];
        }
        else if(arr[i]>max){
        max=arr[i];
        }
        
      }
      cout<<min<<" "<<max<<endl;
    }
    
    return 0;
  }
