#include <bits/stdc++.h>
#include<string>
using namespace std;
  
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      int l=s.length();
      int count=0;
      for(int i=0;i<l;i++){
        if(char(s[i])=='A' || char(s[i])=='E' || char(s[i])=='I' || char(s[i])=='O'||char(s[i])=='U'){
          count++;
        }
      }
      int left=l-count;
      cout<<count<<" "<<left<<endl;
    }
    
    return 0;
  }
