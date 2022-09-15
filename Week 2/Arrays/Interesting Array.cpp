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
      long long k;
      cin>>k;
      int i=0;int j=n-1;
      while(i<j){
        if(arr[i]+arr[j]==k){
          break;
        }
        else if(arr[i]+arr[j]<k){
          i++;
        }
        else{
          j--;
        }
      }
      if((j!=0 || i!=0) && i!=j){
        cout<<i<<" "<<j<<endl;
      }
      else{
        cout<<"no answer"<<endl;
      }
    }
    
    return 0;
  }
