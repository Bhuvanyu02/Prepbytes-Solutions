#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      int count=0;
      for(int i=0;i<s.length();i++){
        if(s[i]=='a'){
          count++;
        }
      }
      int h=s.length()-count;
      if(count>h){
        cout<<s.length()<<endl;
      }
      else{
        h=count-1;
        cout<<count+h<<endl;
      }
      
    }
    
    return 0;
  }
