#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    
    
    int t;
    cin>>t;
    
    while(t--){
      
      string str;
      cin>>str;
      
      int n = str.length();
      
      
      string ans;
      
      for(int i=n-1;i>=0;i--){
        ans.push_back(str[i]);
      }
      
      int count=0;
      
      for(int i=0;i<n;i++){
          
          int asci1 = str[i];
          int asci2 = ans[i];
          
          if(asci1 - asci2 > 0){
            count += asci1 - asci2;
          }
          
      }
      
      cout<<count<<endl;
      
      
    }
    
    return 0;
  }
