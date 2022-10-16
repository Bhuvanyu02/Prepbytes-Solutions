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
      long long arr2[n];
      for(int i=0;i<n;i++){
        cin>>arr[i];
        arr2[i]=arr[i];
      }
      sort(arr2,arr2+n);
      int ans1=0;
      int ans2=0;
      bool check1=true;
      for(int i=0;i<n;i++){
        if(arr[i]==arr2[i]){
          continue;
        }
        else if(arr[i]!=arr2[i] && check1==true ){
          ans1=i;
          check1=false;
        }
        if(check1==false && arr[i]!=arr2[i]){
          ans2=i;
        }
      }
      cout<<ans1<<" "<<ans2<<endl;
    }
    
    return 0;
  }
