#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int  t;
    cin>>t;
    while(t--){
      char arr[2];
      for(int i=0;i<2;i++){
        cin>>arr[i];
      }
      char arr2[10];
      for(int i=0;i<10;i++){
        cin>>arr2[i];
      }
      bool check=false;
      for(int i=0;i<10;i++){
        if(arr[0]==arr2[i]){
          check=true;
        }
       if(arr[1]==arr2[i]){
          check=true;
        }
      }
      if(check==true){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
    
    return 0;
  }
